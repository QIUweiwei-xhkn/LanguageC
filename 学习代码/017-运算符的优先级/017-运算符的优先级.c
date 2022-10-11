#include<stdio.h>

int main() {
	int a, b, c,d;
	a = b = c = d= 100;
	//int d = 100;
	a += b += c += d += 100;
	//printf("%d,%d,%d,%d", a, b, c, d);
	int n = 1;
	printf("%d",(++n) + (++n) + (++n));

}