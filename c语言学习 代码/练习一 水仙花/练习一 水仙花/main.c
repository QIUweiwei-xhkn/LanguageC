#include <stdio.h>
int main() {
    int i;
    int a,b,c;
    for (i = 0;i <=999;i ++) {
        a = i/100;
        b = i % 100/10;
        c = i % 10;
        if (i == a*a*a+b*b*b+c*c*c) {
            printf("%d\n",i);
        }
    }
    
}
//水仙花值一个数的各个位的立方之和等于它本身
