#include <stdio.h>
kerwin_printf() {
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

kerwin_sum(int x,int y,int z) {
    int sum = 0;
    sum = x + y + z;
    printf("%d\n",sum);
    return sum;
}

int main() {
    kerwin_printf(9);
    kerwin_printf(6);
    kerwin_printf(8);
    
    kerwin_sum(10,20,30);
}
