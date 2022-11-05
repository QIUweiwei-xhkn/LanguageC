#include <stdio.h>
kerwin_printf() {
    int a = 100;
    printf("************\n");
    printf("   kerein   \n");
    printf("************\n");
    for (int i = 1;i <= 9;i ++) {
        for (int j = 1;j <= i;j++) {
            printf("%d*%d = %d  ",i,j,i*j);
        }printf("\n");
    }
    return 0;
}
int main () {
    kerwin_printf();
    kerwin_printf();
    kerwin_printf();
    // printf("%d",a); 函数内部的bianliang，函数外部不能访问
}

