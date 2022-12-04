#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char* a = "abc";
    char* b = "acd";
    char* c = "aaa";
    char* d = "abd";
    int res = strncmp(a,d,3);
    printf("%d\n",res);
    
    char* p1 = (char*)malloc(100);
    char* p2 = (char*)malloc(100);
    if (p1 == NULL || p2 == NULL)
        return 0;
    printf("请输入密码\n");
    scanf("%s",p1);
    printf("请再次输入密码\n");
    scanf("%s",p2);
    if(strcmp(p1,p2) == 0) {
        printf("输入正确\n");
    }
    else
        printf("两次输入的密码不匹配\n");
    free(p1);
    free(p2);
    return 0;
}
