#include<stdio.h>

int main() {
	//printf 打印终端
	// sprintf 

	// kerwin 
	char str[100];
	sprintf_s(str, 100,"尊敬的%s先生/女士", "kerwin");


	char time[100];

	sprintf_s(time, 100, "%d/%d/%d", 2022, 8, 15);

	printf("%s\n", time);
}