import java.io.*;


class ConvertFile  {


	static String 	INFO 		= "\nBITMAP PACKER (c)2020 by Jan Neuvians. All Rights reserved.";
	static String 	HELP 		= "Usage: java ConvertFile -<options> <filename> <colordepth>\n- Options are optional.\n- Colordepth values may only be 1, 2, 4, 8 or 16 Bit.\n";
	static String 	VERSION 	= "1.0B";
	
/*-------------------------------------------------------------------------------------------------------------------*/


	public static String getKeywordValue(String Keyword, String rawData)  {

		int start 	= rawData.indexOf(Keyword) + Keyword.length();
		int end 	= rawData.indexOf(";", start);

		return rawData.substring(start, end).trim();

	}

/*-------------------------------------------------------------------------------------------------------------------*/

	public static int getHighestValue(char[] values)  {




		int value 	= 0;
		int a 		= 0;

		for (int x=0; x<values.length; x++)  {

			a = (int)values[x];

			if (a > value) value = a;

		}

		return value;

	}

/*-------------------------------------------------------------------------------------------------------------------*/


	public static int getBitsize(int num)  {


		int a 	= 0;

		while ((num >> a) > 0) a++;

		return a;

	}


/*-------------------------------------------------------------------------------------------------------------------*/



	public static char[] getBitmapData(String rawData)  {

		System.out.print("\nReading Bitmap Data...");

		String data = "";

		for (int x = rawData.lastIndexOf("{") + 1; x < rawData.lastIndexOf("}"); x++)  {

 			data += rawData.charAt(x);

 		}


 		String[] values_Str = data.split(",");
 		char[]	 values 	= new char[values_Str.length];

 		for (int x=0; x<values.length; x++)  {

 			try {

			values[x] = (char)Integer.parseInt(values_Str[x].trim());	

			}

			catch (NumberFormatException e)  {


				try  {
					values[x] = (char)Integer.parseInt(values_Str[x].trim().substring(2, 4), 16);
				}

				catch (NumberFormatException e2)  {

					e2.printStackTrace();
				}
			}		

 		}

 		System.out.print("Done! Read " + values.length + " Array values.");

 		return values;

	}

/*-------------------------------------------------------------------------------------------------------------------*/


	public static void main (String[] args)  {

		System.out.println(INFO);
		System.out.println("Version: " + VERSION);

		int 	colorDepth	= 0;
		String 	filename	= "";
		String 	everything 	= "";	
		String  options		= "";

		switch(args.length)  {


			case 2:

				filename	= args[0];

				try {

				colorDepth	= Integer.parseInt(args[1]);

				}
				catch (NumberFormatException e)  {

					e.printStackTrace();

				}

				break;

			case 3:

				options		= args[0];
				filename	= args[1];

				try {

				colorDepth	= Integer.parseInt(args[2]);

				}
				catch (NumberFormatException e)  {

					e.printStackTrace();

				}

				break;

			default:

				System.out.println("Invalid number of arguments.");
				System.out.println(HELP);
				System.exit(1);
		}

		switch(colorDepth)  {

			case 1:
			case 2:
			case 4:
			case 8:
			case 16:
				break;
			default:
				System.out.println("Invalid value for Colordepth.");
				System.out.println(HELP);
				System.exit(1);

		}


/*-------------------------------------------------------------------------------------------------------------------*/


		 int i 				= 0;

		try (BufferedReader br = new BufferedReader(new FileReader(filename)))  {

			System.out.print("\nOpening Input file. Filename: " + filename  + "...");

		    StringBuilder sb 	= new StringBuilder();
		    String line 		= br.readLine();


		    while (line != null)  {

		        sb.append(line);
		        sb.append(System.lineSeparator());
		        line = br.readLine();
		        i++;
	    	}

		    everything = sb.toString();
		
		}

		catch (IOException e)  {

            e.printStackTrace();
        
        }

        System.out.print("Done! Read " + i + " lines.");

/*-------------------------------------------------------------------------------------------------------------------*/

		char[] 	values 			= getBitmapData(everything);
		int 	sprite_width	= Integer.parseInt(getKeywordValue("width = ",  everything));
		int 	sprite_height	= Integer.parseInt(getKeywordValue("height = ", everything));

/*-------------------------------------------------------------------------------------------------------------------*/

		int 		dataSize	= 16;
		char[] 		byteArray 	= new char[values.length/dataSize*colorDepth];
		String 		prefix		= "";
		int 		pos			= 0;
		int 		step 		= dataSize/colorDepth;
		String 		dataType	= "";

		if (dataSize > 8)
			dataType	= "uint16_t";
		else dataType	= "uint8_t";


		filename 	= filename.substring(0, filename.length()-2) + "_" + colorDepth + "BIT";

		System.out.print("\nWriting Output file. Filename: " + filename + "...");

		try  {

            FileWriter writer = new FileWriter(filename + ".h");

            writer.write("const static int " + filename + "_HEIGHT = " + sprite_height + ";\n");
            writer.write("const static int " + filename + "_WIDTH  = " + sprite_width  + ";\n\n");

            writer.write("const static " + dataType + " " + filename + "[" + byteArray.length + "] PROGMEM = {");

            System.out.print("\nCompressing Bitmap format to " + dataSize + " Bits with " + colorDepth +" Bit Colordepth...");

			for (int x = 0; x < values.length; x+=step)  {

				pos 	= x/step;
				prefix	= "0x";

				if ((x % sprite_width) == 0) writer.write("\n\t");

				for (int b = 0; b < step; b++)  {
					byteArray[pos]	= (char)((byteArray[pos] << colorDepth) | values[x+b]);
				}

				if (dataSize > 8)  {
					if (byteArray[pos] < 0x1000) prefix += "0";
					if (byteArray[pos] < 0x0100) prefix += "0";
				}
				if (byteArray[pos] < 0x0010) prefix += "0";

				writer.write(prefix + Integer.toHexString(byteArray[pos]).toUpperCase());
				if (x < values.length - step) writer.write(",");

			}

			System.out.print("Done! ");

			writer.write("\n};");
            writer.close();
        } 

        catch (IOException e)  {

               e.printStackTrace();
         
         }

         System.out.print("\nClosing file. " + byteArray.length + " Array values written.");
         System.out.print("\nCompression: 1:" + values.length/byteArray.length);

/*-------------------------------------------------------------------------------------------------------------------*/
	System.out.println("\n" + getHighestValue(values) + " " + getBitsize(getHighestValue(values)));

	System.out.println("\nGoodbye.");

 	}
}