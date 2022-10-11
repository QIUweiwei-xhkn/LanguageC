#include<stdio.h>

int main() {
    /*int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    printf("%d", sum);*/

    //1000-2000 所有得闰年 ， for里面可以嵌套if
    int count = 0;
    for (int n = 1000; n <= 2000; n+=4) {
        if (n%400==0 || n%100!=0) {
            printf("%d ", n);
            //每四个 加一个 \n
            count++;
            if (count%4==0) {
                printf("\n");
            }
        }

    }
}