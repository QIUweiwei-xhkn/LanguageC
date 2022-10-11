#include<stdio.h>

int main() {
	//int a = (100, 200);
	int a = 1;

	/*a = (a + 2);
	a= a*a;*/

	a = (a += 2, a * a);
	printf("%d", a);
}