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
	toBin(5);
	toBin2(2);

	//printf("%d\n", 5 & 2);// 0

	//printf("%d\n", 5 | 2);// 7

	//printf("%d\n", ~5); //-6


	//printf("%d\n", 5^2); //7


	//printf("%d\n", 5 >> 2); //1 ”““∆2Œª


	printf("%d\n", 5 << 2); //20 ◊Û“∆2Œª
}
//5
// 0000 0000 0000 0000 0000 0000 0000 0101 ‘≠¬Î

//~5
// 1111 1111 1111 1111 1111 1111 1111 1010 ≤π¬Î

// 1111 1111 1111 1111 1111 1111 1111 1001 ∑¥¬Î

// 1000 0000 0000 0000 0000 0000 0000 0110 ‘≠¬Î

//-5 
// 1000 0000 0000 0000 0000 0000 0000 0101 ‘≠¬Î

// 1111 1111 1111 1111 1111 1111 1111 1010 ∑¥¬Î

// 1111 1111 1111 1111 1111 1111 1111 1011 ≤π¬Î


