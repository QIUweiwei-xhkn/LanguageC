#include<stdio.h>

int main() {
    
    //int n = 1;
    //int sum = 0;
    //while (n <= 100) {
    //    
    //    //printf("%d", n);
    //    //sum = sum + n;
    //    sum += n;
    //    n++;

    //    
    //}

    //printf("%d", sum);
    int n = 0;
    printf("ÇëÊäÈëÊı×Ö\n");
    scanf_s("%d", &n);

    int sum = 1;

    while (n>=1) {
        sum *= n;
        n--;
    }

    printf("%d", sum);
}