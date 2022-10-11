#include<stdio.h>
struct student
{
	int age;
	int score;
	//char * name;

	char name[100];
};
int main() {
 
	/*struct student student1 = {
		18,
		100,
		"kerwin"
	};

	struct student student2 = student1;

	student2.name = "tiehcui";

	printf("%s", student2.name);*/

	/*char p[100];
	scanf_s("%s", p, 100);
	printf("%s", p);*/

	struct student student3;
	//int age;
	//printf("录入年龄\n");
	//scanf_s("%d", &student3.age);
	//printf("录入成绩\n");
	//scanf_s("%d", &student3.score);


	//////char name[100];
	//printf("录入姓名\n");
	//scanf_s("%s", student3.name, 100);


	printf("请录入姓名，年龄， 成绩\n");
	scanf_s("%s%d%d", student3.name,100, &student3.age, &student3.score);

	printf("%s,%d，%d\n", student3.name, student3.age,student3.score);
}