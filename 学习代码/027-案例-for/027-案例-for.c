#include<stdio.h>

int main() {
    /*int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    printf("%d", sum);*/

    //1000-2000 ���е����� �� for�������Ƕ��if
    int count = 0;
    for (int n = 1000; n <= 2000; n+=4) {
        if (n%400==0 || n%100!=0) {
            printf("%d ", n);
            //ÿ�ĸ� ��һ�� \n
            count++;
            if (count%4==0) {
                printf("\n");
            }
        }

    }
}