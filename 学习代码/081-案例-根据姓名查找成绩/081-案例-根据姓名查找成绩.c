#include<stdio.h>
#include<string.h>
int main() {

	char* str[] = { "tiechui","kerwin","xiaoming","kevin" };
	int score[] = {100,99,98,97};
	char search[100];

	while (1) {
		printf("��������Ҫ��ѯ������\n");

		scanf_s("%s", &search, 100);

		//����search ƴ�� \0;
		strcat_s(search, 100, "");

		for (int i = 0; i < sizeof(str) / sizeof(char*); i++) {
			if (strstr(str[i], search) != NULL) {
				printf("������%s,�ɼ�:%d\n", str[i], score[i]);
			}
		}
	}

}