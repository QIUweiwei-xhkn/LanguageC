#include<stdio.h>

int main() {
	int type = 1;

	printf("请输入设备型号:\n");
	scanf_s("%d", &type);
	int num = 20;
	switch (type) {
	case 1 :
		printf("调用显卡驱动");
		break;
	case 2:
		printf("调用声卡驱动");
		break;
	case 3:
		printf("调用摄像头驱动");
		break;
	default: //默认
		printf("设备型号有误");
	}
}