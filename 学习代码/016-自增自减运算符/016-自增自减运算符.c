#include<stdio.h>

int main() {
	int a = 1;
	//a--; a++

	//++a;

	int result = 0;

	//++a;
	//result = 10 + a++; // a���裬�ȸ�ֵ���㣬 ������
	result = 10 + ++a; //a�ڷ� ���������� �ٸ�ֵ���㡣
	printf("%d,%d\n", result,a);


	// ѭ������ʱ�� 
	int n = 10;
	int sum = ++n + ++n + ++n;
	printf("%d,%d",sum,n);
}