#include<stdio.h>

//定义一个函数， 

kerwin_printf() {
	int a = 100;
	//函数主题
	printf("*************\n");
	printf("kerwin\n");
	printf("*************\n");
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d*%d=%d ", j, i, i * j);
		}

		printf("\n");
	}
}  

//注意
/*
   1.  函数内部得变量外部无法访问；
*/


int main() {
	/**/

	kerwin_printf(); //调用函数 9*9
	kerwin_printf(); //调用函数 6*6
	kerwin_printf(); //调用函数 8*8

	//printf("%d", a);
}  