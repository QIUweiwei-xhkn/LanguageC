#include<stdio.h> // ע�ͣ�����ͷ�ļ�

//���
int main() {
	//short bank_sum = 32765+100;
	
	//unsigned int band_sum = 4294967297;
	//int price = 1000;

	//long sum = -1000L; //l L 1000L��һ�������͵ĳ���
	// �Զ�����ת������
	//int length = sizeof(sum); //������������ռ���ֽ���
	//printf("�ܼ۸� %u", band_sum);

	//%d ʮ���Ƶģ��з��ţ�����
	//%u �޷��ŵ�ʮ���Ƶ�����
	//%o �˽��Ƶģ��з��ţ�����
	//%x ʮ�����Ƶģ��з��ţ�����

	int a1 = 123.3; //ʮ����

	int a2 = 0127; //�˽���

	int a3 = 0x1e; //ʮ������  1-9 a b c d e f


	int a4 = 0b111; 

	printf("%d", a1);
	//printf("%o", a2);

	//printf("%x", a3);

	//printf("%b", a4); //2������ʾ��� 
}
