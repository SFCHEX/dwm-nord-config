//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
//	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{"Bat:", "acpi | awk  '{print $3 , $4}' | sed 's/,//g'",	30,		0},

	{"Vol:", "awk -F\"[][]\" '/Left:/ { print $2 }' <(amixer sget Master)", 	0,		10},
	{"", "date '+%b %d (%a) %I:%M%p'",					60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
