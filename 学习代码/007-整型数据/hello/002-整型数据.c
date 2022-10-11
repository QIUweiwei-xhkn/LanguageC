#include<stdio.h> // 注释，引入头文件

//入口
int main() {
	//short bank_sum = 32765+100;
	
	//unsigned int band_sum = 4294967297;
	//int price = 1000;

	//long sum = -1000L; //l L 1000L是一个长整型的常量
	// 自动类型转换机制
	//int length = sizeof(sum); //计算数据类型占的字节数
	//printf("总价格 %u", band_sum);

	//%d 十进制的（有符号）整型
	//%u 无符号的十进制的整数
	//%o 八进制的（有符号）整型
	//%x 十六进制的（有符号）整型

	int a1 = 123.3; //十进制

	int a2 = 0127; //八进制

	int a3 = 0x1e; //十六进制  1-9 a b c d e f


	int a4 = 0b111; 

	printf("%d", a1);
	//printf("%o", a2);

	//printf("%x", a3);

	//printf("%b", a4); //2进制显示结果 
}
