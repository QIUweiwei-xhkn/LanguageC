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
	//¼���ַ 
	// {"����"��"����"}
	char str[100] = "����%����%����԰��%aaa,bbb,ccc";
	char* splitStr[100];
	//printf("%s", str);

	/*printf("%s\n", splitStr[0]);
	printf("%s\n", splitStr[1]);
	printf("%s\n", splitStr[2]);*/

	//�����и��
	split(str, splitStr, "%,");


	int m = 0;

	while (splitStr[m]) {
		printf("%s\n", splitStr[m]);
		m++;
	}
}