#include <stdio.h>
#include "036-global.h"
extern int sum(int x,int y);
int main() {
    printf("%d\n",mysum);
    printf("main函数得mysum的地址%p\n",&mysum);
    sum(20,30);
    printf("%d\n",mysum);
}
