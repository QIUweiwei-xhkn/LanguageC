#include<stdio.h>
#include<stdbool.h>
int kerwin_sum(int x, int y, int z) {
	int sum = 0;

	sum = x + y + z;

	/*printf("%d", sum);*/

	return sum;
}
//空返回
void kerwin_print() {
	
}


//封装是不是质数得

int kerwin_isPrime(int n) {
	int i;
	for (i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			
			//break;
			return false;
		}
	}

	// <= n/2  不是质数
	// >n/2  是质数

	//if (i <= n / 2) {
	//	//printf("不是质数");
	//	return false;
	//}
	//else {
	//	//printf("是质数");
	//	return true;
	//}

	return true;
}

int main() {
	int mysum = kerwin_sum(10, 20, 30); //函数调用完得结果， 函数表达式

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