#include <stdio.h>
#include <string.h>
int main() {
    char* str[] =  { "tiechui","kerwin","xiaoming","kevin" };
    char score[] = {100,99,98,97};
    char search[100];
        printf("请输入你要查询的姓名\n");
        scanf("%s",search);
        strcat(search,"");
        for(int i = 0; i < sizeof(str)/sizeof(char*);i++) {
            if(strstr(str[i], search) != NULL)
                printf("姓名：%s，成绩：%d\n",str[i],score[i]);
        }
    return 0;
}
