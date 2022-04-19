//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/	              /*Command*/                   		/*Update Interval*/	/*Update Signal*/
    {"",                      "todonow",                             120,                    0},
    {" Yuri Folder: ",       "yurisize",                            400,                    0},
    {"",                      "mstatus",                             1,                      0},
    {"",                     "acpi | awk -F, '{ print $2 }'",       400,                    0},
    {" ",                    "date '+(%a) %d %b'",                  12000,	                 0},
    {" ",                    "date '+%H:%M'",                       60,                     0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 13;
