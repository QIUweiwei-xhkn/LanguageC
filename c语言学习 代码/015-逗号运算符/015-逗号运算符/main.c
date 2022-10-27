#include <stdio.h>
int main(){
    int a = 1;
    /*a += 2;
    a = a * a;*/
    a = (a += 2,a * a);
    printf("a = %d",a);
}
