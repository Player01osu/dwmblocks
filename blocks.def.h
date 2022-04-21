//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/                                              /*Command*/                                        /*Update Interval*/         /*Update Signal*/
	{"",                                                  "todonow",                                          0,                        12},
	{"^c#44475a^^b#81A1C1^  Yuri Folder ",               "yurisize",                                         400,                       0},
	{"",                                                  "mstatus",                                          1,                         0},
	{" ^c#81A1C1^^b#373d49^ ",                           "acpi | awk -F, '{ print $2 }'",                    400,                       0},
	{" ^c#373d49^^b#7aa2f7^  ^c#282c34^^b#668ee3^ ",     "date '+(%a) %d %b'",                               12000,                     0},
	{" ^c#373d49^^b#81A1C1^  ",                          "echo ^c#373d49^^b#7292b2^ $(date '+%H:%M') ^d^",   60,                        0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ^d^";
static unsigned int delimLen = 13;
