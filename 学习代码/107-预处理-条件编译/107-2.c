#include<stdio.h>
#define KERWIN 2
int main() {
#if KERWIN==1
	printf("�������ʵĳ�������");

#elif KERWIN==2
	printf("�������еĳ�������");

#elif KERWIN==3
	printf("�������еĳ�������");
#else 
	printf("������ʿ�ĳ�������");

#endif
}
