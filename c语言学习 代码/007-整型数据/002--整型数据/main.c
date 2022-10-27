#include <stdio.h>
int main() {
    int a1 = 123.3;
    int a2 = 0127;
    int a3 = 0x1e;
    int a4 = 0b111;
    printf("%d\n",a1);//%d十进制有符号整型
    printf("%o\n",a2);//%八进制有符号整型,八进制以0开头
    printf("%x\n",a3);//%x十六进制有符号整型，十六进制以0x开头
    printf("%b\n",a4);//二进制显示结果，觉得有误，C语言中没有二进制的直接输出
}
