#include <stdio.h>
#include <stdbool.h>
int main() {
    int n;
    printf("请输入数字：\n");
    scanf("%d",&n);
    /*int isprime = true;
    for (int i = 2;i <= n/2;i++) {
        if(n % i == 0) {
            isprime = false;
            break;
        }
    }printf("%d\n",isprime);
    if (isprime) {
        printf("是质数\n");
    }
    else {
        printf("不是质数\n");
    }*/
    
    int i;
    for (int i = 2;i <= n/2;i++) {
        if(n % i == 0) {
            break;
        }
        if (i <= n/2) {
            printf("不是质数");
        }
        else {
            printf("是质数");
        }
    }
}
