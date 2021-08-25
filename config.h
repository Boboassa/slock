/* user and group to drop privileges to */
static const char *user  = "luca";
static const char *group = "luca";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#ccbbb0",    /* after initialization */
	[INPUT] =  "#ccbbb0",    /* during input */
	[FAILED] = "#82354f",    /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* default message */
static const char * message = "";

/* text color */
static const char * text_color = "#ccbbb0";

/* text size (must be a valid size) */
static const char * font_name = "10x20";

/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static const int logosize = 10;

/* grid width and height for right center alignment */
static const int logow = 10;
static const int logoh = 12;

static XRectangle rectangles[10] = {
    /* dwm logo                 */
	/* x      y       w       h */
/*
    { 0,      3,      1,      3 },
	{ 1,      3,      2,      1 },
	{ 0,      5,      8,      1 },
	{ 3,      0,      1,      5 },
	{ 5,      3,      1,      2 },
	{ 7,      3,      1,      2 },
	{ 8,      3,      4,      1 },
	{ 9,      4,      1,      2 },
	{ 11,     4,      1,      2 },
*/

    /* lock                     */
	/* x      y       w       h */
	{ 2,      0,      5,      1 },
	{ 1,      1,      2,      1 },
	{ 6,      1,      2,      1 },
	{ 1,      2,      1,      4 },
	{ 7,      2,      1,      4 },
	{ 0,      6,      9,      2 },
	{ 0,      8,      4,      2 },
	{ 5,      8,      4,      2 },
	{ 0,      10,     9,      1 },
	{ 1,      11,     7,      1 },
};

/*Enable blur*/
//#define BLUR

/*Set blur radius*/
static const int blurRadius=20;

/*Enable Pixelation*/
#define PIXELATION

/*Set pixelation radius*/
static const int pixelSize=10;

