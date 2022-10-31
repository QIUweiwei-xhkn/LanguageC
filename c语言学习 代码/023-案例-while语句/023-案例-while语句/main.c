#include <stdio.h>
int main() {
   /* int n = 1;
    int sum = 0;
    while (n <= 100) {
        printf("%d\n",n);
        sum = sum + n;
        n++;
    }printf("sum =%d\n",sum);*/
    
    int n = 0;
    printf("请输入一个数字\n");
    scanf("%d",&n);
    int sum = 1;
    while (n >=1) {
        sum = sum*n;
        n--;
    }
    printf("sum = %d\n",sum);
}
