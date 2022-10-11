#include<stdio.h>
#include<stdlib.h>
int main() {
	FILE* fp;
	int error = fopen_s(&fp, "kerwin.txt", "rb+");
	if (error != 0) {
		return;
	}

	fseek(fp, 0, SEEK_END);

	int length = ftell(fp);
	char* str = (char*)malloc(length + 1);
	if (str == NULL) return;
	rewind(fp);
	//fgets(str, length + 1, fp);

	fread(str, length, 1, fp);
	str[length] = '\0'; 

	printf("%s", str);

	fclose(fp);
	free(str);
}