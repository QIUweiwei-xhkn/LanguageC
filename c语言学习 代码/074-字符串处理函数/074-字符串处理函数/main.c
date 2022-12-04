#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char *p = (char*)malloc(100);
    char *str = "kerwin";
    if(!p) return 0;
    strcpy(p,str);
    printf("%s\n",p);
    free(p);
    return 0;
}
