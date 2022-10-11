#include<stdio.h>

struct stu {
	char gender;//0 1
	int age;
	int score;
};
int main() {
	//int age;
	struct stu student;

	printf("%lld", sizeof(student));


	printf("%p\n", &student.gender);
	printf("%p\n", &student.age);
}