#include<stdio.h>
#include<stdlib.h>

char* func(num) {
	char* p = (char*)malloc(num);
	return p;
}

int main() {
	//char* p;
	//p = (char*)malloc(100);
	//
	//free(p);
	////�������������� p ָ����ڴ���
	//p = "kerwin";//p ָ���ĵط���

	char *x = func(100);

	char *y = func(200);

	//--------------------


	free(x);
	free(y);
}  