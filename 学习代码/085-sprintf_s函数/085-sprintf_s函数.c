#include<stdio.h>

int main() {
	//printf ��ӡ�ն�
	// sprintf 

	// kerwin 
	char str[100];
	sprintf_s(str, 100,"�𾴵�%s����/Ůʿ", "kerwin");


	char time[100];

	sprintf_s(time, 100, "%d/%d/%d", 2022, 8, 15);

	printf("%s\n", time);
}