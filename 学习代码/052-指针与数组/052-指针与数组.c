#include<stdio.h>
void swap(int* a) {
	int temp = *a; //临时变量先存其中一个值
	*a = *(a+1);
	*(a+1) = temp;
}

void sort(int* myarr, int length) {
	//数组arr  地址，，，，，
	//printf("%d", sizeof(myarr));
	// 如果 myarr指针，  myarr[0] myarr[1];
	for (int i = 0; i < length - 1; i++) {
		for (int j = 0; j < length - 1 - i; j++) {
			if (myarr[j] > myarr[j + 1]) {
				//printf("%d\n", arr[i + 1]);
				swap(&myarr[j]);
			}
		}
	}
}

int main() {
	//int arr[] = { 11,22,33 };

	//int* p = arr;

	//printf("%p\n", arr);

	//printf("%p\n", &arr[1]);
	//printf("%p\n", arr+1); // arr[1] 地址  &arr[1]
	//printf("%p\n", &arr + 1); // 跳过整个数组的长度
	//printf("%p\n", p + 1);


	//printf("%d\n", *(p+2) );

	int arr[] = { 44,11,33,7,2,1,3,66 };

	//调用排序函数

	sort(arr, sizeof(arr) / sizeof(int));

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d\n", arr[i]);
	}
}