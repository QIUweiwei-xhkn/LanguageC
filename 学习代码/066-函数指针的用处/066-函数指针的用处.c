#include<stdio.h>

void test() {
	printf("test方法调用\n");
}

void func(void (*ptest)(void) ) {
	printf("开始工作\n");
	// 调用其他函数;
	ptest();
	printf("结束工作\n");
}

int main() {
	//func();

	func(test);
}