#include<stdio.h>
#include<stdlib.h>
typedef struct student {
	char name[100];
	int score;
}STU;
int main() {
	int num = 0;
	printf("������¼�������\n");
	scanf_s("%d", &num);
	STU *stup = (STU*)malloc(num * sizeof(STU));

	for (int i = 0; i < num; i++) {
		printf("��¼���������ɼ�\n");
		scanf_s("%s%d", stup[i].name,100, &stup[i].score);
	}

	for (int i = 0; i < num; i++) {
		printf("%s,%d\n", (stup + i)->name, (stup + i)->score);
	}

	float sum = 0;
	for (int i = 0; i < num; i++) {
		sum += (stup + i)->score;
	}

	printf("ƽ���ɼ�%f\n", sum / num);
}