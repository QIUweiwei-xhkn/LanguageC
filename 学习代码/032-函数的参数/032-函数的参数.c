#include<stdio.h>

//����һ�������� 

kerwin_printf(int n) {
	int a = 100;
	//��������
	printf("*************\n");
	printf("kerwin\n");
	printf("*************\n");
	for (int i = 1; i <= n; i++) {
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


kerwin_sum(int x,int y ,int z) {
	int sum = 0;

	sum = x + y + z;

	printf("%d", sum);
}

int main() {
	/**/

	kerwin_printf(9); //���ú��� 9*9
	kerwin_printf(6); //���ú��� 6*6
	kerwin_printf(8); //���ú��� 8*8

	//printf("%d", a);

	kerwin_sum(10, 20, 30);
}