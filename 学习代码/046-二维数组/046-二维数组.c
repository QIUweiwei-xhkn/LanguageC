#include<stdio.h>

int main() {
	/*int grades[3][3] = {
		{98,99,100},
		{100,99,98},
		{87,88,78}
	}*/

	char grades[][3] = {
		{98,99,100},
		{100,99},
		{87,88,78}
	};

	//printf("%d\n", grades[2][1]);

	for (int i = 0; i < sizeof(grades) / (sizeof(char) * 3); i++) {
		printf("µÚ%dĞĞ\n", i);
		for (int j = 0; j < 3; j++) {
			printf("%d\n", grades[i][j]);
		}
	}


	//char str[] = "kerwin";

	char str[][100] = { "kerwin","xiaoming","tiechui","Öî¸ğÉ½Õä" };


	for (int i = 0; i < sizeof(str) / (sizeof(char) * 100); i++) {
		printf("%s\n", str[i]);
	}
	printf("%d\n", str[0][5]);


	int school[2][2][2] = {
		{
			{100,99},
			{98,200}
		},
		{
			{100,99},
			{98,100}
		}

	};

	printf("%d\n", school[0][1][1]);
}