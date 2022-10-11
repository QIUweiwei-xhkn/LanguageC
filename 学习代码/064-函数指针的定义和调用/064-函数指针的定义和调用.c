#include<stdio.h>
int max(int a,int b ) {

	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}
int main() {
	//int res = max(10, 20);

	//printf("%d\n", res);

	int (*p)(int, int) = max;


	int res = (*p)(30, 20);
	printf("%d\n", res);
}