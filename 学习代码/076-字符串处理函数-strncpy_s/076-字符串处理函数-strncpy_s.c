#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#pragma warning(disable:4996)
int main() {
	char p1[] = "kerwin";
	char* p2 = "kerwin/xiaoming/tiechui";

	printf("%lld\n", sizeof(p1) / sizeof(char));
	printf("%lld\n", sizeof(p2) );

	printf("%zd\n", strlen(p1));
	printf("%zd\n", strlen(p2));

	char* p = (char*)malloc(100);
	if (!p) return;
	strncpy_s(p,strlen(p2)+1, p2,60);

	//strncpy(p, p2, 60); //超出了， 自动补0
	printf("%s\n", p);

	//printf("%zd", strlen(p));

	for (int i = 0; i < 100; i++) {
		printf("%d\n", p[i]);
	}
}  