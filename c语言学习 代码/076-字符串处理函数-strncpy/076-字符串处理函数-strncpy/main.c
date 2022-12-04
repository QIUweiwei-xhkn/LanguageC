#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char p1[] = "kerwin";
    char *p2 = "kerwin/xiaoming/teichui";
    printf("%ld\n",sizeof(p1)/sizeof(char));
    printf("%ld\n",sizeof(p2));
    printf("%zd\n",strlen(p1));
    printf("%zd\n",strlen(p2));
    
    char *p = (char*)malloc(100);
    if (!p) return 0;
    strncpy(p,p2,strlen(p2)+1);
    for(int i = 0; i < 100; i++) {
        printf("%c",p[i]);
    }
    free(p);
    return 0;
}
