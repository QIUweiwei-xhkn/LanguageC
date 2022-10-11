#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
	char* a = "abc";
	char* b = "acd";
	char* c = "aaa";
	char* d = "abd";
	//int res = strcmp(a, d);

	int res = strncmp(a, d,3);

	printf("%d", res);



	char* p1 = (char*)malloc(100);
	char* p2 = (char*)malloc(100);
	if (p1 == NULL || p2 == NULL) return;
	printf("请输入密码\n");

	scanf_s("%s", p1,100);
	printf("请再次输入密码\n");

	scanf_s("%s", p2, 100);

	if (strcmp(p1, p2) == 0) {
		printf("输入正确\n");
	}
	else {
		printf("两次输入密码不匹配\n");
	}
}  