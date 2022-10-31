#include <stdio.h>
int main() {
    for (int i = 1;i <= 10;i++) {
        /*if (i == 5) {
            break;   //结束循环
        }*/
        
        if (i ==5) {
            continue;   //结束本次循环
        }
        printf("%d\n",i);
    }
}
