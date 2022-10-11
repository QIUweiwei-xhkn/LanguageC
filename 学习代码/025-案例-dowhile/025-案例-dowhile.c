#include<stdio.h>

int main() {
    /*int n = 1;
    int sum = 0;
    do {
        sum += n;
        n++;
    } while (n<=100);

    printf("%d", sum);*/

    int score = 0;
    /*do {

        printf("请输入成绩0-100：\n");
        scanf_s("%d", &score);
    } while (score>100);*/


    while (score > 100 || score == 0 ) {
        printf("请输入成绩0-100：\n");
        scanf_s("%d", &score);
    }

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