#include<stdio.h>

int main() {
	int arr[] = { 1,44,11,33,7,2,3,66 };
	//�ٶ�0λ�� ��Ӧ��������С��
	//int index = 0;

	//for (int i = 1; i < sizeof(arr) / sizeof(int); i++) {
	//	if (arr[i] < arr[index]) {
	//		index = i;

	//		
	//	}
	//}

	//int temp = arr[0];
	//arr[0] = arr[index];
	//arr[index] = temp;

	////�ٶ�1λ�� ��Ӧ��������С��
	//int index2 = 1;

	//for (int i = 2; i < sizeof(arr) / sizeof(int); i++) {
	//	if (arr[i] < arr[index2]) {
	//		index2 = i;
	//	}
	//}

	//int temp2 = arr[1];
	//arr[1] = arr[index2];
	//arr[index2] = temp2;



	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		int index = i;
		for (int j = i + 1; j < sizeof(arr) / sizeof(int); j++) {
		
			if (arr[j] < arr[index]) {
				index = j;
			}
		}
		//�ҵ�����Сֵ�������� ���ǵ�ǰiλ�ã�
		if (index != i) {
			int temp = arr[i];
			arr[i] = arr[index];
			arr[index] = temp;
		}
	}


	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d\n", arr[i]);
	}
}