#include<stdio.h>
void kerwin();
//外部函数
void init() {
	printf("初始化");

	kerwin();
}

//静态函数

static void kerwin() {
	printf("hello kerwin");
}