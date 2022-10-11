#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void split(char *str,char ** splitStr,char *p) {

	char* buf = NULL;
	splitStr[0] = strtok_s(str, p, &buf);

	//printf("%s\n", splitStr[0]);

	int i = 0;
	while (splitStr[i]) {
		i++;

		splitStr[i] = strtok_s(NULL, p, &buf);
	}
}


int main() {
	//录入地址 
	// {"辽宁"，"大连"}
	char str[100] = "辽宁%大连%高新园区%aaa,bbb,ccc";
	char* splitStr[100];
	//printf("%s", str);

	/*printf("%s\n", splitStr[0]);
	printf("%s\n", splitStr[1]);
	printf("%s\n", splitStr[2]);*/

	//进行切割处理
	split(str, splitStr, "%,");


	int m = 0;

	while (splitStr[m]) {
		printf("%s\n", splitStr[m]);
		m++;
	}
}