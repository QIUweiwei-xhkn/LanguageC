#include<stdio.h>

int main() {
	int type = 1;

	printf("�������豸�ͺ�:\n");
	scanf_s("%d", &type);
	int num = 20;
	switch (type) {
	case 1 :
		printf("�����Կ�����");
		break;
	case 2:
		printf("������������");
		break;
	case 3:
		printf("��������ͷ����");
		break;
	default: //Ĭ��
		printf("�豸�ͺ�����");
	}
}