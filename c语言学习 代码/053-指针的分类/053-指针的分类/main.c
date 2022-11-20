#include <stdio.h>
int main() {
//    char ch = 'k';
//    float x = 1.1f;
//    char *p = &ch;
//    float *fp = &x;
//    *p = 'e';
//    *fp = 2.2f;
//    printf("%c\n",ch);
//    printf("%f\n",x);
    
    
//    int *x;
//    char *cp;
//    printf("%ld\n",sizeof(x));
//    printf("%ld\n",sizeof(cp));
    
//    int a = (int)1.1f;
//    printf("%d\n",a);
    
//    int x = 0x11223344;
//    char *p = (char *) &x;
//    *p = 0;
//    printf("%x\n",x);
    
    int arr[] = {11,22,33};
    char *p = arr;
    printf("%p\n",arr);
    printf("%p\n",p);
    printf("%p\n",*(p+4));
    return 0;
}
