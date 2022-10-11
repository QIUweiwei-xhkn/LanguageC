#include<stdio.h>
#include<stdlib.h>
#define TOTAL 100

typedef char(*TYPE_P)[TOTAL];
int main() {
	int number = 0;
	//char (*p)[100] =  {"kerwin","tiechui","xiaoming"}
	scanf_s("%d", &number);

	TYPE_P p = (TYPE_P) calloc(number, TOTAL);
	if (!p) return;
	for (int i = 0; i < number; i++) {
		scanf_s("%s", *(p + i), TOTAL);
	}

	for (int i = 0; i < number; i++) {
		printf("%s\n", p[i]);
	}

	// arr[] = {1,2,3} arr[0]  *p


	free(p);
}