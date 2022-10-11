#include<stdio.h>
static int mysum;
extern void sum(int x, int y);

int main() {
	printf("%d\n", mysum);
	printf("%p\n", &mysum);
	sum(10, 20);
	printf("%d\n", mysum);
}



