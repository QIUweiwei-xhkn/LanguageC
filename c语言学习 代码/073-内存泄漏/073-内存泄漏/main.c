#include <stdio.h>
#include <stdlib.h>
char* func(int num) {
    char* p = (char*)malloc(num);
    return p;
}
int main() {
//    char* p;
//    p = (char*)malloc(100);
//    free(p);
    char *x = func(100);//未释放申请内存，内存泄露
    char *y = func(200);///未释放申请内存，内存泄露
    free(x);
    free(y);
    return 0;
}
