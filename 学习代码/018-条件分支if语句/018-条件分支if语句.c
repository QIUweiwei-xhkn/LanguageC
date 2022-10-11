#include<stdio.h>

int main() {
	// if
	// >200 -10 <200 -5
	int sum = 10;
	//if (sum>200) {
	//	//条件达成
	//	sum = sum - 10;
	//}
	//else {
	//	//条件未达成
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
		printf("你真抠");
	}

	printf("%d\n", sum);
}