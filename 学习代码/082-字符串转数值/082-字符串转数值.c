#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define NUM 100
typedef char(*PNAME)[NUM];
int main() {
	//char* str[] = { "tiechui","kerwin","xiaoming","kevin" };
	//int score[] = { 100,99,98,97 };
	int person = 0;
	char personStr[100];
	printf("请输入录入的人数\n");
	scanf_s("%s", personStr,100);

	strcat_s(personStr, 100, "");
	person = atoi(personStr);

	printf("%d\n", person);

	PNAME name = (PNAME)calloc(person, NUM);
	int* score = (int*)malloc(sizeof(int) * person);
	if (name == NULL || score == NULL) return;
	for (int i = 0; i < person; i++) {
		printf("录入姓名\n");
		scanf_s("%s", *(name + i), NUM);
		printf("录入成绩\n");
		scanf_s("%d", &score[i]);
	}

	char search[100];

	while (1) {
		printf("请输入你要查询的姓名\n");

		scanf_s("%s", &search, 100);

		//对于search 拼接 \0;
		strcat_s(search, 100, "");

		for (int i = 0; i < person; i++) {
			if (strstr(name[i], search) != NULL) {
				printf("姓名：%s,成绩:%d\n", name[i], *(score+i));
			}
		}
	}


	free(score);
	free(name);
}