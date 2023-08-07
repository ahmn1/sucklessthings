/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#45475A",     /* after initialization */
	[INPUT] =  "#1E1E2E",   /* during input */
	[FAILED] = "#F38BA8",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "So.. you're a philosopher?\nYes, I think very deeply.\nDo you think people really care for each other?\nHmm... that will bare some thought.";

/* text color */
static const char * text_color = "#CDD6F4";

/* text size (must be a valid size) */
static const char * font_name = "fixed";
