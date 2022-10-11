#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
	char p1[] = "kerwin";
	char* p2 = "kerwin";

	printf("%lld\n", sizeof(p1) / sizeof(char));
	printf("%lld\n", sizeof(p2) );

	printf("%zd\n", strlen(p1));
	printf("%zd\n", strlen(p2));

	char* p = (char*)malloc(100);
	if (!p) return;
	strcpy_s(p,strlen(p2)+1, p2);

	printf("%s", p);
}  