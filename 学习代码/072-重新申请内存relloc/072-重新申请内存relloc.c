#include<stdio.h>
#include<stdlib.h>
int main() {
	int* p = (int*)malloc(12);
	if (!p) return;
	p[0] = 100;
	p[1] = 200;
	p[2] = 300;

	//p[3] = 400;

	int *p1 = realloc(p, 16);
	if (!p1) return;
	//p1[]
	//p[3] = 400;
	p1[3] = 400;


	for (int i = 0; i < 4; i++) {
		printf("%d\n", p1[i]);
	}

	//free(p);
	free(p1);
}  