#include<stdio.h>

struct add {
	int adda;
	char addb;
};

struct stu {
	char a[10];
	int b;

	//int b[5];
	//struct add address;
};

int main() {
	struct stu student;
	printf("%lld", sizeof(student));
}