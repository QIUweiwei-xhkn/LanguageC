#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//告诉编译器， 不用检查安全性
//#pragma warning(disable:4996)
int main() {
	char* p = (char*)malloc(100);
	char* str = "kerwin";

	//p = str;
	if (!p) return;
	/*for (int i = 0; i < 7; i++) {
		p[i] = str[i];
	}

	printf("%s", p);*/

	strcpy_s(p,7, str);
	printf("%s", p); 
	free(p);
}  