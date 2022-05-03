//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/                                              /*Command*/                                        /*Update Interval*/         /*Update Signal*/
	{"",                                                  "todonow",                                          0,                        12},
	{"",                                                  "yurisize",                                         400,                       0},
	{"",                                                  "mstatus",                                          1,                         0},
	{"",                                                  "bati",                                             400,                       0},
	{"",                                                  "datebar",                               12000,                     0},
	{"",                                                  "timebar",   60,                        0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ^d^ ";
static unsigned int delimLen = 13;
