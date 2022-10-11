#include<stdio.h>

int main() {
	//>200 Дђ7ел
	int sum = 150;
	/*if (sum>200) {
		sum *= 0.7;
	}*/

	//sum > 200 ? sum *= 0.7 : 0;

	//sum = 1 > 2 ? 3 : 4;

	sum = sum > 200 ? sum * 0.7 : sum;

	printf("%d", sum);
}