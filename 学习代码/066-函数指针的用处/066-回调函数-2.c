#include<stdio.h>


//�Լ���װ����

void myshow(int a, int b) {
	//���½��棬 ���½�����������
	printf("ѹ������%d-----%d\n", a, b);
}

//ѹ������ --��

void compress(char* file_name, void (*cb)(int, int)) {
	//��ʼѹ������
	printf("��ʼѹ������\n");
	printf("��ʼ����ѹ������\n");
	cb(50, 120);

	//show(50, 120);
}



int main() {
	
	compress("kerwin.jpg", myshow);
}