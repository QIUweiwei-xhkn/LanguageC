#include<stdio.h>

int main() {
	enum week {mon=1,tue,wed,thu,fri,sat,sun};

	enum week day;

	day = mon;
	day = sun;

	/*sun = 9;*/
	// switch case sat  case sun :
	printf("%d\n", day);
	printf("%d\n", sat);
	printf("%d\n", sun);
}