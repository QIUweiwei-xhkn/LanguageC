#include<stdio.h>

int main() {
	/*int arr[] = { 11,22,33 };
	int* p = { 11,22,33 };*/

	/*char ch[] = { 'k','e','r' };
	char* p = { 'k','e','r' };*/

	char ch[] = "kerwin";
	char* p = ch;

	/**(p + 1) = 'x';
	printf("%s", ch);*/

	char* p1 = "kerwin";

	char* p2 = "kerwin";
	printf("%c", *(p1 + 1)); //�ɶ�

	//*(p1 + 1) = 'x'; //����д��
	printf("%c", *(p1 + 1)); //�ɶ�


	printf("%p\n", p1);
	printf("%p\n", p2);


	p2 = "xiaoming";

	printf("%p\n", p2);
}