#include<stdio.h>
#include<stdlib.h>

int main() {
	// int arr[100] ;
	// int *p = arr;

	

	//int* p = (int *)malloc(4*3);
	//if (!p) return;
	//p[0] = 100;
	//p[1] = 200;
	//p[2] = 300;
	////p[3] = 400;
	//for (int i = 0; i < 3; i++) {
	//
	//	printf("%d\n", p[i]);
	//}


	printf("������༶������\n");
	int number = 0;
	scanf_s("%d", &number);
	int* p = (int*)malloc(sizeof(int) * number);
	if (!p) return;
	for (int i = 0; i < number; i++) {
		scanf_s("%d", &p[i]);
	}

	for (int i = 0; i < number; i++) {
		printf("��%dѧ���ĳɼ���%d\n", i + 1, p[i]);
	}
	//����===�����ݿ�


	free(p);
	//free(p);
}  