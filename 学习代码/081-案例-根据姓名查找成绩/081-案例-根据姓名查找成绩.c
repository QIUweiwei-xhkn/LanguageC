#include<stdio.h>
#include<string.h>
int main() {

	char* str[] = { "tiechui","kerwin","xiaoming","kevin" };
	int score[] = {100,99,98,97};
	char search[100];

	while (1) {
		printf("请输入你要查询的姓名\n");

		scanf_s("%s", &search, 100);

		//对于search 拼接 \0;
		strcat_s(search, 100, "");

		for (int i = 0; i < sizeof(str) / sizeof(char*); i++) {
			if (strstr(str[i], search) != NULL) {
				printf("姓名：%s,成绩:%d\n", str[i], score[i]);
			}
		}
	}

}