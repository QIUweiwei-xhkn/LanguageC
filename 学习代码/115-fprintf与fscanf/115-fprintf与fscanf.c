#include<stdio.h>

int main() {
	//printf scanf_s

	// fprintf fscanf_s

	FILE* fp;
	int error = fopen_s(&fp, "kerwin.txt", "w+");

	if (error != 0) {
		return;
	}
	int num = 100;
	fprintf(fp,"%d",num);
	rewind(fp);
	int num2 = 0;
	fscanf_s(fp, "%d", &num2);

	printf("%d", num2);
}