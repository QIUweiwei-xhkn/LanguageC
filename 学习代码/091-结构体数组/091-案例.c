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
		printf("��¼���%d��ѧ�������������䣬 �ɼ�\n",i+1);
		scanf_s("%s%d%d", stu[i].name, 100, &stu[i].age, &stu[i].score);
	}
	

	for (int i = 0; i < 3; i++) {
		printf("��%d��ѧ�������� %s������%d�� �ɼ�%d\n", i + 1, stu[i].name, stu[i].age, stu[i].score);
	}


	float sum = 0;
	for (int i = 0; i < 3; i++) {
		sum += stu[i].score;
		//printf("��%d��ѧ�������� %s������%d�� �ɼ�%d\n", i + 1, stu[i].name, stu[i].age, stu[i].score);
	}

	printf("ƽ����%f\n",sum / 3);
}