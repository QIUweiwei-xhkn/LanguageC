#include <stdio.h>
static int mysum;
extern void sum(int x,int y);
int main() {
    printf("%d\n",mysum);
    printf("%p\n",&mysum);
    sum(20,30);
    printf("%d\n",mysum);
}
