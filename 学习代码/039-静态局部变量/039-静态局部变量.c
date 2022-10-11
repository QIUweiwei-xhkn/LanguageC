#include<stdio.h>
void kerwin();
int main() {
	int sum = 100;
	printf("%d\n", sum);
	kerwin();
	kerwin();
	kerwin();
	kerwin();
	if (1) {
		int a = 10;

	}

	//printf("%d\n", a);

	for (int i = 0; i <= 10; i++) {
		static int mysum = 0;
		mysum += i;
		printf("%d\n", mysum);
	}

	
}

void kerwin() {
	static int x = 200;
	x++;
	printf("%d\n", x);
}

