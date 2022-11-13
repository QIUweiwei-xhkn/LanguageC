#include <stdio.h>
#include "036-global.h"
//extern int mysum;
void sum (int x,int y) {
    mysum = x + y;
    printf("sum函数得mysum的地址%p\n",&mysum);
}
