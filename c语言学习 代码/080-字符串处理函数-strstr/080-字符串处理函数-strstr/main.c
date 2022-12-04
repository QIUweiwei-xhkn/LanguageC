#include <stdio.h>
#include <string.h>
int main() {
    char* str[] = {"teichui","kerwin","xiaoming","kevin"};
    char search[100];
    printf("请输入您要模糊查询的字符串\n");
    scanf("%s",search);
    strcat(search,"");//对search拼接\0
    for(int i = 0; i < sizeof(str)/sizeof(char*); i++) {
        if(strstr(str[i],search)!= NULL)
            printf("%s\n",str[i]);
    }
    return 0;
}
