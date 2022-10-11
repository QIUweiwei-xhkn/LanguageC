#include<stdio.h>

int main() {
    /*
      案例1: 判断奇数偶数
        + 数学: 能整数 2 的就是 偶数, 否则就是 奇数
        + 代码:
          => % 2 为 0, 表示整除
          => % 2 为 1, 表示没有整除
          => 任何一个整数, % 2, 要么得到 0 要么得到 1
    */
    int num = 0;
    printf("请输入内容：\n");
    //输入内容
    scanf_s("%d", &num);

    /*if (num % 2 == 0) {
        printf("偶数");
    }
    else {
        printf("奇数");
    }*/
    /*if (num % 2) {
        printf("奇数");
    }
    else {
        printf("偶数");
    }*/

   /* if (!(num % 2)) {
        printf("偶数");
    }
    else {
        printf("奇数");
    }*/


    /*
  案例2: 根据 0 ~ 100 的数字输出成绩
    + [90, 100] 输出 A
    + [80, 90) 输出 B
    + [70, 80) 输出 C
    + [60, 70) 输出 D
    + [0, 60) 输出 E
*/

    if (num >= 90) {
        printf("A");
    }
    else if (num >= 80) {
        printf("B");
    }
    else if (num >= 70) {
        printf("C");
    }
    else if (num >= 60) {
        printf("D");
    }
    else {
        printf("E");
    }

    /*
  案例3: 判断闰年
    + 什么是闰年 ?
      世纪闰年：公历年份是整百数的，必须是400的倍数才是闰年
      普通闰年：公历年份是4的倍数，且不是100的倍数的

      世纪闰年: year % 400 == 0
      普通闰年: year % 4 == 0 && year % 100 != 0
*/
    //if (num % 400 == 0 || num % 4 == 0 && num % 100 != 0) {
    //    printf("闰年");
    //}
    //else {
    //    printf("平年");
    //}
}