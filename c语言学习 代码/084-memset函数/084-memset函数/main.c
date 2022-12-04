#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
//    char* p = (char*)calloc(25,4);
    char* p = (char*)malloc(100);
    char p1[] = "kerwin";
    if(!p) return 0;
    memset(p,100,100);
//    for (int i = 0; i < 100; i++) {
//        printf("%d\n", p[i]);
//    }
    
    memset(p1,0,7);
//    for (int i = 0; i < 7; i++) {
//        printf("%d\n", p1[i]);
//    }
    
    int* ip = (int*)malloc(100);
    if(!ip) return 0;
    memset(ip,-1,100);//int数组 只能0和 -1
    for(int i = 0; i < 100/sizeof(int); i++)
        printf("%d\n",ip[i]);
    free(ip);
    free(p);
    return 0;
}
