#include<stdio.h>
#include<stdbool.h>
int main() {
   // 质数，3 ，5，7， 11，，，，

   /* 7 % 2 不为0
   *  7 % 3 不为0
   * .......
   *  7 % 6 不为0
   * */

	int n = 0;
	printf("请输入数字\n");
	scanf_s("%d", &n);

	//int isPrime = true;
	//for (int i = 2; i <= n/2; i++) {
	//	if (n % i == 0) {
	//	  //是质数
	//		isPrime = false;

	//		break;
	//	}
	//}

	////printf("%d", isPrime);
	//if (isPrime) {
	//	printf("是质数");
	//}
	//else {
	//	printf("不是质数");
	//}

	int i;
	for (i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			//是质数
			break;
		}
	}

	// <= n/2  不是质数
	// >n/2  是质数

	if (i <= n / 2) {
		printf("不是质数");
	}
	else {
		printf("是质数");
	}
}