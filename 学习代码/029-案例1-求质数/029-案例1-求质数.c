#include<stdio.h>
#include<stdbool.h>
int main() {
   // ������3 ��5��7�� 11��������

   /* 7 % 2 ��Ϊ0
   *  7 % 3 ��Ϊ0
   * .......
   *  7 % 6 ��Ϊ0
   * */

	int n = 0;
	printf("����������\n");
	scanf_s("%d", &n);

	//int isPrime = true;
	//for (int i = 2; i <= n/2; i++) {
	//	if (n % i == 0) {
	//	  //������
	//		isPrime = false;

	//		break;
	//	}
	//}

	////printf("%d", isPrime);
	//if (isPrime) {
	//	printf("������");
	//}
	//else {
	//	printf("��������");
	//}

	int i;
	for (i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			//������
			break;
		}
	}

	// <= n/2  ��������
	// >n/2  ������

	if (i <= n / 2) {
		printf("��������");
	}
	else {
		printf("������");
	}
}