#include<stdio.h>
#include<stdlib.h>
typedef struct student {
	char name[100];
	int score;
}STU;
int main() {
	int num = 0;
	printf("请输入录入的认数\n");
	scanf_s("%d", &num);
	STU* stup = (STU*)malloc(num * sizeof(STU));

	for (int i = 0; i < num; i++) {
		printf("请录入姓名，成绩\n");
		scanf_s("%s%d", stup[i].name, 100, &stup[i].score);
	}

	FILE* fp;
	int error = fopen_s(&fp, "kerwin.txt", "w+");
	if (error != 0) {
		return;
	}
	for (int i = 0; i < num; i++) {
		printf("%s,%d\n", (stup + i)->name, (stup + i)->score);

		fprintf(fp, "姓名:%s|成绩:%d\n", (stup + i)->name, (stup + i)->score);
	}
	
}