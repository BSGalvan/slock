/* user and group to drop privileges to */
static const char *user  = "bsg";
static const char *group = "wheel";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#111111",     /* after initialization */
	[INPUT] =  "#195e45",   /* during input */
	[FAILED] = "#170000",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static const int logosize = 75;
/* grid width and height for right center alignment */
static const int logow = 12;
static const int logoh = 6;

static XRectangle rectangles[13] = {
	/* x    y       w       h */
	{  0,   1,      4,      1 },
	{  0,   3,      4,      1 },
	{  0,   5,      4,      1 },
	{  0,   1,      1,      5 },
	{  3,   1,      1,      5 },
	{  0,   5,      7,      1 },
	{  6,   1,      7,      1 },
	{  6,   2,      1,      3 },
	{  9,   2,      1,      4 },
	{  9,   5,      4,      1 },
	{  12,  3,      1,      2 },
	{  11,  3,      1,      1 },
};

/*Enable blur*/
#define BLUR
/*Set blur radius*/
static const int blurRadius=5;
/*Enable Pixelation*/
//#define PIXELATION
/*Set pixelation radius*/
//static const int pixelSize=0;
