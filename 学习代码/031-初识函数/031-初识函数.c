#include<stdio.h>

//����һ�������� 

kerwin_printf() {
	int a = 100;
	//��������
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

//ע��
/*
   1.  �����ڲ��ñ����ⲿ�޷����ʣ�
*/


int main() {
	/**/

	kerwin_printf(); //���ú��� 9*9
	kerwin_printf(); //���ú��� 6*6
	kerwin_printf(); //���ú��� 8*8

	//printf("%d", a);
}  