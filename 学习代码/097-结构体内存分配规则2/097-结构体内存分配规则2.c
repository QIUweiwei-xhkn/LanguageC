#include<stdio.h>
struct stu {
	/*char a;
	int c;
	short b;*/

	int a;
	char b[3];
};
int main() {
	struct stu student;
	printf("%lld", sizeof(student));

	/*printf("%p\n", &student.a);
	printf("%p\n", &student.b);
	printf("%p\n", &student.c);*/
}