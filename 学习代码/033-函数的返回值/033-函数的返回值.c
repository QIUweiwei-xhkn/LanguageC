#include<stdio.h>
#include<stdbool.h>
int kerwin_sum(int x, int y, int z) {
	int sum = 0;

	sum = x + y + z;

	/*printf("%d", sum);*/

	return sum;
}
//�շ���
void kerwin_print() {
	
}


//��װ�ǲ���������

int kerwin_isPrime(int n) {
	int i;
	for (i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			
			//break;
			return false;
		}
	}

	// <= n/2  ��������
	// >n/2  ������

	//if (i <= n / 2) {
	//	//printf("��������");
	//	return false;
	//}
	//else {
	//	//printf("������");
	//	return true;
	//}

	return true;
}

int main() {
	int mysum = kerwin_sum(10, 20, 30); //����������ý���� �������ʽ

	//printf("%d", mysum);

	//int result = kerwin_isPrime(9);

	for (int i = 300; i < 500; i++) {
		if (kerwin_isPrime(i)) {
			printf("%d\n", i);
		}
	}
	//printf("%d", result);
	return 0;
}