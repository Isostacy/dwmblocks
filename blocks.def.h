//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
/*	{"", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0}, */
	{"", "echo [ $(pamixer --get-volume)]",					1,		0},
	{"",   "echo [$(playerstatus)]",						1,		0},
	{"", "echo [ $(uname -r)]",				          	30,		0},
	{"",   "echo [$(forecast)]",				          	30,		0},
	{"", "echo [ $(date '+%a %b %d, %Y')]",					5,		0},
	{"", "echo [ $(date '+%I:%M %p')]", 		 			5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
