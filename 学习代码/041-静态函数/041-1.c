#include<stdio.h>
void kerwin();
//�ⲿ����
void init() {
	printf("��ʼ��");

	kerwin();
}

//��̬����

static void kerwin() {
	printf("hello kerwin");
}