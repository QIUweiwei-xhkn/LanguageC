#include<stdio.h>
#include<string.h>
int main() {
	
	char* str[] = { "tiechui","kerwin","xiaoming","kevin"};

	char search[100];

	printf("��������Ҫģ����ѯ���ַ���\n");

	scanf_s("%s", &search, 100);

	//����search ƴ�� \0;
	strcat_s(search, 100, "");

	for (int i = 0; i < sizeof(str) / sizeof(char*); i++) {
		if (strstr(str[i], search) != NULL) {
			printf("%s\n", str[i]);
		}
	}

	//printf("%p", strstr("kerwin", "ker"));
}