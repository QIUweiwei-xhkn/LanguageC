#include<stdio.h>
#include<stdlib.h>
typedef struct student {
	char name[100];
	int score;
}STU;

void input(STU *p) {
	printf("��¼���������ɼ�\n");
	scanf_s("%s%d", p->name, 100, &p->score);
}

float sumfunc(STU* p,int num) {
	float sum = 0;
	for (int i = 0; i < num; i++) {
		sum += p[i].score;
	}
	return sum;
}

int main() {
	int num = 0;
	printf("������¼�������\n");
	scanf_s("%d", &num);
	STU* stup = (STU*)malloc(num * sizeof(STU));

	for (int i = 0; i < num; i++) {
		input(stup+i);
	}

	for (int i = 0; i < num; i++) {
		printf("%s,%d\n", (stup + i)->name, (stup + i)->score);
	}

	float sum = 0;
	sum = sumfunc(stup,num);

	printf("ƽ���ɼ�%f\n", sum / num);
}