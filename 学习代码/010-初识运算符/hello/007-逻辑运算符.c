#include<stdio.h>

int main() {

	//printf("%d\n", 1 > 2 && 3<4 );

	//// && ͬ��Ϊ�棬 һ�����

	//printf("%d\n", 1 > 2 || 3 > 4);

	//// || һ��Ϊ�棬 ͬ��Ϊ��

	//printf("%d\n", !(1 > 2));


	int price = 250;//�ܽ��
	int type = 1; // 0 ������ʳƷ�� 1 �ҵ�  2. �·�

	int day = 6;// 6 ���� 7 ����  1 ��һ,,,,,,,,,, 

	if (price > 200 && type == 1 && !(day==6 || day==7) ) {
		price *= 0.7;//price = price*0.7

		printf("%d", price);
	}


	// && ��·

	int gender = 1; //0 Ů 1 ��

	/*if (gender == 0) {
		printf("Ů");
	}*/

	gender == 0 && printf("Ů");
	//����Ż�ִ�У�����
}