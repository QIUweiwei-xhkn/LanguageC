#include <stdio.h>
//#pragma warning (disable:4996)
int main()
{
	FILE* fp;
	// linux "kerwin.txt"  "./kerwin.txt"   相对路径
	// window "kerwin.txt"  ".\\kerwin.txt" 相对路径

	// E:\\1-Kerwin\\C\\code\\hello\\hello\\kerwin.txt 绝对路径
	//fp = fopen("kerwin.txt", "a+");
	// 
	int error = fopen_s(&fp, "kerwin.txt", "w");
	// r read
	// w write
	// a append
	// + 

	//if (fp == NULL) {
	//	printf("打开失败");
	//	//perror("fopen");
	//	return;
	//}

	if (error != 0) {
		printf("打开失败");
		//perror("fopen");
		return;
	}

	printf("成功");


	// fclose()

	int eclose = fclose(fp);
	//eclose = fclose(fp);
	if (eclose == 0) {
		printf("关闭成功");
	}
	else {
		printf("关闭失败");
	}
}