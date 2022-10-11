#include<stdio.h>
struct student
{
	int age;
	int score;
	char name[100];
};
int main() {

	
	struct student stu[3];
	
	for (int i = 0; i < 3; i++) {
		printf("请录入第%d个学生的姓名，年龄， 成绩\n",i+1);
		scanf_s("%s%d%d", stu[i].name, 100, &stu[i].age, &stu[i].score);
	}
	

	for (int i = 0; i < 3; i++) {
		printf("第%d个学生的姓名 %s，年龄%d， 成绩%d\n", i + 1, stu[i].name, stu[i].age, stu[i].score);
	}


	float sum = 0;
	for (int i = 0; i < 3; i++) {
		sum += stu[i].score;
		//printf("第%d个学生的姓名 %s，年龄%d， 成绩%d\n", i + 1, stu[i].name, stu[i].age, stu[i].score);
	}

	printf("平均分%f\n",sum / 3);
}