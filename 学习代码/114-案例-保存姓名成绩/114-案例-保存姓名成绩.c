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
	STU* stup = (STU*)malloc(num * sizeof(STU));

	for (int i = 0; i < num; i++) {
		printf("��¼���������ɼ�\n");
		scanf_s("%s%d", stup[i].name, 100, &stup[i].score);
	}

	for (int i = 0; i < num; i++) {
		printf("%s,%d\n", (stup + i)->name, (stup + i)->score);
	}

	FILE* fp;
	int error = fopen_s(&fp, "kerwin.txt", "w+");
	if (error != 0) {
		return;
	}

	fwrite(stup,sizeof(STU),num,fp);

	//�����ƴ洢

	STU* stup1 = (STU*)malloc(num * sizeof(STU));

	rewind(fp);

	fread(stup1, sizeof(STU), num, fp);

	for (int i = 0; i < num; i++) {
		printf("%s,%d\n", (stup1 + i)->name, (stup1 + i)->score);
	}
}