#include<stdio.h>

int main() {

	//printf("%d\n", 1 > 2 && 3<4 );

	//// && 同真为真， 一假则假

	//printf("%d\n", 1 > 2 || 3 > 4);

	//// || 一真为真， 同假为假

	//printf("%d\n", !(1 > 2));


	int price = 250;//总金额
	int type = 1; // 0 代表是食品， 1 家电  2. 衣服

	int day = 6;// 6 周六 7 周天  1 周一,,,,,,,,,, 

	if (price > 200 && type == 1 && !(day==6 || day==7) ) {
		price *= 0.7;//price = price*0.7

		printf("%d", price);
	}


	// && 短路

	int gender = 1; //0 女 1 男

	/*if (gender == 0) {
		printf("女");
	}*/

	gender == 0 && printf("女");
	//左真才会执行，，，
}