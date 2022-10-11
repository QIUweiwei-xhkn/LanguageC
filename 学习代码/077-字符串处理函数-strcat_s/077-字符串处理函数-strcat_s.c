#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	/*char* p = (char*)malloc(120);

	if (!p) return;
	scanf_s("%s", p, 100);

	char* str = "先生/女士";

	strcat_s(p, 120, str);

	printf("%s\n", p);*/

	char* str = "先生/女士";
	char mystr[100] = {'k','e','r','w','i','n'};

	//char* mystr = "kerwin";
	//strcat_s(mystr, 100, str);
	strncat_s(mystr, 100, str,4);
	printf("%s", mystr);
}  