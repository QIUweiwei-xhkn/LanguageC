#include <stdio.h>
int mysum;
void sum(int x,int y) {
    mysum = x + y;
    printf("%p\n",&mysum);
    printf("%d\n",mysum);
}

