#include<stdio.h>
#include<stdbool.h>
int main() {
    //while (true) {
    //    int score = 0;
    //    printf("请输入成绩0-100：\n");
    //    scanf_s("%d", &score);

    //    int flag = score / 10;

    //    //printf("%d", flag);

    //    switch (flag) {
    //    case 10:
    //    case 9:
    //        printf("A");
    //        break;
    //    case 8:
    //        printf("B");
    //        break;
    //    case 7:
    //        printf("C");
    //        break;
    //    case 6:
    //        printf("D");
    //        break;
    //    default:
    //        printf("E");
    //        break;
    //    }

    //}

    //后面代码不会执行

    /*while (true) {
        printf("111111");
    }
    printf("222222");*/


    int n = 0;
    while (n <= 5) {
        printf("执行代码，%d\n", n);
        //n++; //
        n += 1;
        //调整步长
    }
}