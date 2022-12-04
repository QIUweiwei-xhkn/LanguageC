#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char p1[] = "kwewin";
    char *p2 = "kerwin";
    printf("%ld\n",sizeof(p1)/sizeof(char));
    printf("%ld\n",sizeof(p2));
    printf("%zd\n",strlen(p1));
    printf("%zd\n",strlen(p2));
    char *p = (char*)malloc(100);
    if(!p) return 0;
    strcpy(p,p2);
    printf("%s\n",p);
    free(p);
    return 0;
}
