#include<stdio.h>

int main() {
	int a = 1;
	//a--; a++

	//++a;

	int result = 0;

	//++a;
	//result = 10 + a++; // a懒惰，先赋值计算， 再自增
	result = 10 + ++a; //a勤奋 ，先自增， 再赋值计算。
	printf("%d,%d\n", result,a);


	// 循环语句的时候， 
	int n = 10;
	int sum = ++n + ++n + ++n;
	printf("%d,%d",sum,n);
}