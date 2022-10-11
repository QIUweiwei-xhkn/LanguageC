#include<stdio.h>
int main() {


	FILE* fp;
	int error = fopen_s(&fp, "kerwin.txt", "r+");
	if (error != 0) {
		return;
	}

	
	fseek(fp, 4, SEEK_SET);

	char bir[100];
	fgets(bir, 100, fp);

	printf("%s", bir);
}