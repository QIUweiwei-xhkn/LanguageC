#include<stdio.h>

int main() {
	FILE* fp1, * fp2;

	char ch;

	int error1 = fopen_s(&fp1, "kerwin.txt", "r");
	if (error1 != 0) {
		printf("打开失败");
		return;
	}
	int error2 = fopen_s(&fp2, "copy.txt", "w");
	if (error2 != 0) {
		printf("打开失败");
		return;
	}
	char str[100] = "";
	/*fgets(str, 100, fp1);
	fputs(str, fp2);*/

	fread(str, sizeof(char), 40, fp1);
	//str[6] = '\0';
	printf("*%s*", str);

	fwrite(str, sizeof(char), 40, fp2);
	fclose(fp1);
	fclose(fp2);
}