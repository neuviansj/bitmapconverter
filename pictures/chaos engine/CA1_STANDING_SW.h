/*  GIMP header image file format (INDEXED): /home/neuvians/Pictures/animation/CA1_STANDING_SW.h  */

static unsigned int width = 32;
static unsigned int height = 32;

/*  Call this macro repeatedly.  After each use, the pixel data can be extracted  */

#define HEADER_PIXEL(data,pixel) {\
pixel[0] = header_data_cmap[(unsigned char)data[0]][0]; \
pixel[1] = header_data_cmap[(unsigned char)data[0]][1]; \
pixel[2] = header_data_cmap[(unsigned char)data[0]][2]; \
data ++; }

static char header_data_cmap[256][3] = {
	{ 23, 19, 27},
	{ 51, 47, 71},
	{ 83, 59, 59},
	{ 59, 67, 99},
	{ 99, 87, 75},
	{  0,127, 67},
	{155, 71, 79},
	{115, 79,191},
	{195, 79, 99},
	{223,127,139},
	{247,167,191},
	{255,  0,150},
	{  0,119,255},
	{139,151,255},
	{199,211,255},
	{255,255,  0},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255}
	};
static char header_data[] = {
	11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
	11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
	11,11,11,11,11,11,11,11,11,11,11,11,11,11,4,1,
	7,0,0,0,0,1,1,11,11,11,11,11,11,11,11,11,
	11,11,11,11,11,11,11,11,11,11,1,1,1,1,1,7,
	0,9,10,10,8,6,1,1,11,11,11,11,11,11,11,11,
	11,11,11,11,11,11,11,11,11,1,13,12,12,1,0,0,
	6,10,15,10,10,8,2,1,1,11,11,11,11,11,11,11,
	11,11,11,11,11,11,11,11,1,12,7,7,0,1,0,0,
	8,10,10,10,9,9,2,7,0,11,11,11,11,11,11,11,
	11,11,11,11,11,11,11,11,1,7,7,0,1,0,2,2,
	6,8,9,9,9,6,0,7,0,11,11,11,11,11,11,11,
	11,11,11,11,11,11,11,4,1,7,0,1,7,0,0,13,
	2,2,6,8,6,2,0,7,0,11,11,11,11,11,11,11,
	11,11,11,11,11,11,11,1,1,0,1,7,7,0,1,0,
	6,8,9,8,6,0,1,7,0,11,11,11,11,11,11,11,
	11,11,11,11,11,11,11,1,1,0,7,12,13,0,0,0,
	0,1,13,0,0,0,7,1,0,4,11,11,11,11,11,11,
	11,11,11,11,11,11,4,7,1,1,0,1,7,0,2,9,
	2,0,0,2,0,1,7,1,2,1,4,11,11,11,11,11,
	11,11,11,11,11,11,1,1,7,1,1,0,1,0,0,0,
	6,8,8,2,1,7,1,1,7,1,1,4,11,11,11,11,
	11,11,11,11,11,11,0,1,0,0,0,0,0,0,0,2,
	2,6,2,1,7,1,1,7,13,7,1,1,11,11,11,11,
	11,11,11,11,11,11,1,7,1,0,1,2,1,0,0,0,
	0,1,1,7,13,0,1,13,14,13,12,1,4,11,11,11,
	11,11,11,11,11,11,1,1,0,1,7,12,13,1,0,0,
	1,1,1,1,1,0,7,12,13,12,1,0,1,11,11,11,
	11,11,11,11,11,11,1,0,1,7,12,14,12,4,0,0,
	0,0,0,0,0,1,1,7,12,1,7,7,0,11,11,11,
	11,11,11,11,11,11,0,1,7,12,14,12,4,2,1,0,
	0,0,0,0,0,0,0,0,1,1,14,1,0,11,11,11,
	11,11,11,11,11,11,0,0,0,2,5,4,2,8,9,1,
	0,0,0,0,0,1,7,13,13,13,12,1,0,11,11,11,
	11,11,11,11,11,11,0,1,2,1,0,2,8,9,8,6,
	0,1,1,1,1,0,7,14,7,7,1,0,2,11,11,11,
	11,11,11,11,11,11,2,5,12,4,0,1,6,6,6,2,
	12,1,13,1,7,1,1,13,7,1,1,0,11,11,11,11,
	11,11,11,11,11,2,5,12,7,4,0,0,0,2,6,1,
	13,1,7,12,13,13,12,12,1,1,0,4,11,11,11,11,
	11,11,11,11,2,5,14,7,4,1,0,0,2,0,0,1,
	7,1,1,1,1,7,12,1,1,0,2,4,11,11,11,11,
	11,11,11,2,0,0,7,4,1,0,6,6,2,0,0,1,
	1,0,0,1,1,1,1,0,0,2,4,4,4,11,11,11,
	11,11,11,0,0,1,1,1,0,0,6,6,0,2,4,0,
	0,0,0,0,0,0,0,1,0,4,4,4,4,11,11,11,
	11,11,11,0,4,5,2,0,0,0,0,0,2,4,4,4,
	4,2,0,1,1,1,1,1,0,4,4,4,4,11,11,11,
	11,11,11,4,0,0,0,2,4,4,4,4,4,4,4,4,
	4,4,2,0,1,1,1,0,2,4,4,4,4,11,11,11,
	11,11,11,11,11,4,4,4,4,4,4,4,4,4,4,4,
	4,4,4,0,0,0,0,0,4,4,4,4,11,11,11,11,
	11,11,11,11,4,4,4,4,4,4,4,4,4,4,4,4,
	4,4,4,0,0,0,0,0,4,4,4,4,11,11,11,11,
	11,11,11,4,4,4,4,4,4,4,4,4,4,4,4,4,
	4,4,4,0,1,1,0,0,4,4,4,11,11,11,11,11,
	11,11,11,4,4,4,4,4,4,4,11,11,11,11,11,4,
	4,4,4,0,1,1,1,1,4,4,11,11,11,11,11,11,
	11,11,11,4,4,4,4,4,11,11,11,11,11,11,11,11,
	11,4,4,0,1,1,1,0,4,11,11,11,11,11,11,11,
	11,11,11,11,4,4,4,11,11,11,11,11,11,11,11,11,
	11,11,4,2,0,0,0,2,11,11,11,11,11,11,11,11,
	11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
	11,11,11,4,4,4,4,11,11,11,11,11,11,11,11,11
	};