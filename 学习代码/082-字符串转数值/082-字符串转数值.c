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
	printf("������¼�������\n");
	scanf_s("%s", personStr,100);

	strcat_s(personStr, 100, "");
	person = atoi(personStr);

	printf("%d\n", person);

	PNAME name = (PNAME)calloc(person, NUM);
	int* score = (int*)malloc(sizeof(int) * person);
	if (name == NULL || score == NULL) return;
	for (int i = 0; i < person; i++) {
		printf("¼������\n");
		scanf_s("%s", *(name + i), NUM);
		printf("¼��ɼ�\n");
		scanf_s("%d", &score[i]);
	}

	char search[100];

	while (1) {
		printf("��������Ҫ��ѯ������\n");

		scanf_s("%s", &search, 100);

		//����search ƴ�� \0;
		strcat_s(search, 100, "");

		for (int i = 0; i < person; i++) {
			if (strstr(name[i], search) != NULL) {
				printf("������%s,�ɼ�:%d\n", name[i], *(score+i));
			}
		}
	}


	free(score);
	free(name);
}