#include<stdio.h>

struct stu {
	char c;
	int a;
	int b;
};

union tea {
	char c;
	int a;
	int b;
};

int main() {
	//printf
	struct stu student;
	union tea teacher;

	printf("%lld\n", sizeof(student));
	printf("%lld\n", sizeof(teacher));

	printf("%p\n", &teacher.a);
	printf("%p\n", &teacher.b);
	printf("%p\n", &teacher.c);


	teacher.a = 0x11111111;

	printf("%x\n", teacher.a);

	teacher.c = 0x33;

	printf("%x\n", teacher.a);
}