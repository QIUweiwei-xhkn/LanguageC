#include <stdio.h>
void kerwin_scanf(int *p) {
    *p = 1000;
}

int main() {
    int a = 100;
    int *p = &a;
    printf("%d\n",a);
    printf("%p\n",&a);
    printf("%p\n",p);
    
    int b;
    printf("%p\n",&b);
    kerwin_scanf(&b);
    printf("%d\n",b);
    
}
