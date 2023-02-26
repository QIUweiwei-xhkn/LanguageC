#include <stdio.h>
#define KERWIN 1 //开关

int main() {
#ifdef KERWIN
    printf("kerwin-1111111111\n");
#else
    printf("kerwin-2222222222\n");
#endif
//    int x = 1;
//    if(x)
//        printf("kerwin-3333333333\n");
//    else
//        printf("kerwin-4444444444\n");
    return 0;
}
