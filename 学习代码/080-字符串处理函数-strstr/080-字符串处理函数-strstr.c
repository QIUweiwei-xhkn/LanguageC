#include<stdio.h>
#include<string.h>
int main() {
	
	char* str[] = { "tiechui","kerwin","xiaoming","kevin"};

	char search[100];

	printf("请输入你要模糊查询的字符串\n");

	scanf_s("%s", &search, 100);

	//对于search 拼接 \0;
	strcat_s(search, 100, "");

	for (int i = 0; i < sizeof(str) / sizeof(char*); i++) {
		if (strstr(str[i], search) != NULL) {
			printf("%s\n", str[i]);
		}
	}

	//printf("%p", strstr("kerwin", "ker"));
}