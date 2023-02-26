#include <stdio.h>
#include "105.h"
#define STUDENT 1
#define X 5
#define SQ X*X
#define MAX(a,b) (a>b?a:b)
#define SUM(a,b) (a+b)
int main() {
    printf("%d\n",X);
//    int X = 1;
//    printf("%d\n",X);
    
//    if(x== STUDENT) {
//
//    }
//    else {
//
//    }
    char str[100] = "SQ";
    printf("SQ---%d\n",SQ);
    printf("%s\n",str);
#undef SQ //终止宏定义
    int i = 1;
    int j = 2;
    printf("%d\n",MAX(i,j));
    printf("%d\n",5*SUM(i,j));
    return 0;
}
