#include <stdio.h>
//#pragma warning (disable:4996)
int main()
{
	FILE* fp;
	// linux "kerwin.txt"  "./kerwin.txt"   ���·��
	// window "kerwin.txt"  ".\\kerwin.txt" ���·��

	// E:\\1-Kerwin\\C\\code\\hello\\hello\\kerwin.txt ����·��
	//fp = fopen("kerwin.txt", "a+");
	// 
	int error = fopen_s(&fp, "kerwin.txt", "w");
	// r read
	// w write
	// a append
	// + 

	//if (fp == NULL) {
	//	printf("��ʧ��");
	//	//perror("fopen");
	//	return;
	//}

	if (error != 0) {
		printf("��ʧ��");
		//perror("fopen");
		return;
	}

	printf("�ɹ�");


	// fclose()

	int eclose = fclose(fp);
	//eclose = fclose(fp);
	if (eclose == 0) {
		printf("�رճɹ�");
	}
	else {
		printf("�ر�ʧ��");
	}
}