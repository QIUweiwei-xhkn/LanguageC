#include<stdio.h>

int main() {
	int arr[5] = { 1,2,3,4,5 };
	int* p = arr;
	//printf("%d\n", *p);
	p = &arr[1];
	 

	//printf("%d\n", *p);

	printf("%p\n", &arr);

	printf("%p\n", &arr+1);

	printf("%p\n", &p);
	printf("%p\n", &p + 1);

	//arr = { 4,5 };

	char arr2[] = "kerwin";
	//arr2++;
	//printf("%s", arr2);

	/*for (int i = 0; i < sizeof(arr2) / sizeof(char); i++) {
		printf("%c\n", arr2[i]);
	}*/

	char* p2 = arr2; // 

	while (*p2) {
		printf("%c\n", *p2);

		p2++;
	}



}