#include <stdio.h>
int main() {
//    int arr[] = {11,22,33};
//    int *p = arr;
    
//    char ch[] = {'k','e','r','w','i','n'};
//    char *p = ch;
    char ch[] = "kerwin";
    char *p = ch;
    char *p1 = "kerwin";
    char *p2 = "kerwin";
    printf("%c\n",*(p1 + 1));
    printf("%p\n",p1);
    printf("%p\n",p2);
    p2 = "xiaoming";
    printf("%p\n",p2);
    return 0;
}
