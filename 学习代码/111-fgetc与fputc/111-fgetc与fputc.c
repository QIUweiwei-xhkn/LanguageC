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
	//fgetc
	while ((ch= fgetc(fp1)) != EOF ) {
		//printf("%c", ch);

		fputc(ch, stdout);

		fputc(ch, fp2);
	}

	fclose(fp1);
	fclose(fp2);
}