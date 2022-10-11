//声明
//extern int mysum;

#include"036-global.h"

void sum(int x, int y) {
	//int mysum = x + y;

	//利用全局变量获取到结果

	mysum = x + y;

	printf("sum函数得mysum得地址%p\n", &mysum);
}