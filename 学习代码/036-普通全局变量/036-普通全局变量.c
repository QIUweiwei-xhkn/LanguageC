m#include<stdio.h>
#include"036-global.h"
extern void sum(int x, int y);

int main() {
	printf("%d\n", mysum);
	printf("main函数得mysum得地址%p\n", &mysum);
	sum(10, 20);

	printf("%d", mysum);
}

