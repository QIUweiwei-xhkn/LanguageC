#include<stdio.h>

int main() {
	FILE* fp1, * fp2;

	char ch;

	int error1 = fopen_s(&fp1, "kerwin.txt", "r");
	if (error1 != 0) {
		printf("打开失败");
		return;
	}
	int error2 = fopen_s(&fp2, "copy.txt", "a");
	if (error2 != 0) {
		printf("打开失败");
		return;
	}
	char str[100];
	fgets(str,100,fp1);
	printf("*%s*", str);

	fputs(str, fp2);
	fclose(fp1);
	fclose(fp2);
}