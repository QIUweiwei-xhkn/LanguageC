#include<stdio.h>


//自己封装函数

void myshow(int a, int b) {
	//更新界面， 更新进度条，，，
	printf("压缩进度%d-----%d\n", a, b);
}

//压缩方法 --库

void compress(char* file_name, void (*cb)(int, int)) {
	//开始压缩数据
	printf("开始压缩数据\n");
	printf("开始更新压缩进度\n");
	cb(50, 120);

	//show(50, 120);
}



int main() {
	
	compress("kerwin.jpg", myshow);
}