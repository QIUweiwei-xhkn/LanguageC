#include<stdio.h>

void test() {
	printf("test��������\n");
}

void func(void (*ptest)(void) ) {
	printf("��ʼ����\n");
	// ������������;
	ptest();
	printf("��������\n");
}

int main() {
	//func();

	func(test);
}