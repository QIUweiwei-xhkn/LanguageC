#include<stdio.h>

int main() {
	int arr[] = { 1,2,3,4,5 };

	printf("%p\n", arr);
	printf("%p\n", &arr);
	printf("%p\n", arr+1);

	printf("%p\n", &arr + 1);
	//scanf_s( , &arr)
	// int (*p)[5] p+1
	//int* p = arr;
	int(*p)[5] = &arr;

	printf("%p\n", p + 1);

	for (int i = 0; i < 5; i++) {
		printf("%d\n", (*p)[i]);
	}
	int arr2[] = { 1,2,3,4};
	int(*p2)[2] = &arr2;

	for (int i = 0; i < sizeof(arr2) / (sizeof(int) * 2); i++) {
		//printf("%d\n", (*p)[i]);

		printf("%d\n", **(p2 + i));
	}
}