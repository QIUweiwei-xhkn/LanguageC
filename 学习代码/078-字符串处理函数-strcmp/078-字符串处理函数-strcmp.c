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
	printf("����������\n");

	scanf_s("%s", p1,100);
	printf("���ٴ���������\n");

	scanf_s("%s", p2, 100);

	if (strcmp(p1, p2) == 0) {
		printf("������ȷ\n");
	}
	else {
		printf("�����������벻ƥ��\n");
	}
}  