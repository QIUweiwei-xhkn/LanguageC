#include<stdio.h>

void swap(int *a,int *b) {
	int temp = *a; //临时变量先存其中一个值
	*a = *b;
	*b = temp;
}

void sort(int *myarr,int length) {
	//数组arr  地址，，，，，
	//printf("%d", sizeof(myarr));
	// 如果 myarr指针，  myarr[0] myarr[1];
	for (int i = 0; i < length - 1; i++) {
		for (int j = 0; j < length - 1 - i; j++) {
			if (myarr[j] > myarr[j + 1]) {
				//printf("%d\n", arr[i + 1]);
				swap(&myarr[j], &myarr[j + 1]);
			}
		}
	}
}

int main() {
	int arr[] = { 44,11,33,7,2,1,3,66 };

	//调用排序函数

	sort(arr, sizeof(arr) / sizeof(int));

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d\n", arr[i]);
	}


	printf("%p\n", arr);
	printf("%p\n", &arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[1]);
}