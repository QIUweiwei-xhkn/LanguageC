//����
//extern int mysum;

#include"036-global.h"

void sum(int x, int y) {
	//int mysum = x + y;

	//����ȫ�ֱ�����ȡ�����

	mysum = x + y;

	printf("sum������mysum�õ�ַ%p\n", &mysum);
}