#include<stdio.h>
#include<stdlib.h>
void toBin(int value) {
	int temp[10] = { 0 };
	int i = 0;
	while (value) {
		temp[i] = value % 2;
		value = value / 2;
		i++;
	}

	//printf("%d", i);

	for (i = i - 1; i >= 0; i--) {
		printf("%d", temp[i]);
	}
	printf("\n");
}

void toBin2(int value) {
	char string[100];
	_itoa_s(value,string,100,2);

	printf("%s\n", string);
}

int main() {
	int x = -5;
	//printf("%b", x);
	toBin(x);
	toBin2(x);

	printf("%x", x);
}

// 1000 0000 0000 0000 0000 0000 0000 0101 原码

// 1111 1111 1111 1111 1111 1111 1111 1010 反码

// 1111 1111 1111 1111 1111 1111 1111 1011 补码


// fffffffb