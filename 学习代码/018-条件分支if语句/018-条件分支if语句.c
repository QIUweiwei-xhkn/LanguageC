#include<stdio.h>

int main() {
	// if
	// >200 -10 <200 -5
	int sum = 10;
	//if (sum>200) {
	//	//�������
	//	sum = sum - 10;
	//}
	//else {
	//	//����δ���
	//	sum -= 5;
	//}

	if (sum > 200) {
		sum -= 10;
	}
	else if (sum > 100) {
		sum -= 5;
	}
	else if (sum > 50) {
		sum -= 3;
	}
	else {
		printf("�����");
	}

	printf("%d\n", sum);
}