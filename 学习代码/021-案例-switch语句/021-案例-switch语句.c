#include<stdio.h>

int main() {
	//穿透
    /*int month = 4;
    switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31天");
        break;
    case 2:
        printf("28天");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30天");
        break;
    default:
        printf("错误");
    }*/

    int score = 0;
    printf("请输入成绩0-100：\n");
    scanf_s("%d", &score);

    int flag = score / 10;

    //printf("%d", flag);

    switch (flag) {
    case 10:
    case 9:
        printf("A");
        break;
    case 8:
        printf("B");
        break;
    case 7:
        printf("C");
        break;
    case 6:
        printf("D");
        break;
    default:
        printf("E");
        break;
    }
}