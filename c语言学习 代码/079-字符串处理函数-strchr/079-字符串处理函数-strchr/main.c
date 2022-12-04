#include <stdio.h>
#include <string.h>
int main() {
//    char* str = "kereweien";
//    char* res = strchr(str,'e');
//    char* res2 = strrchr(str,'e');
//    if(res == NULL) {
//        printf("不在");
//        return 0;
//    }
//    printf("%p\n",str);
//    printf("%p\n",res);
//    printf("%d\n",(int)(res - str));
    
    char* str[] = {"kerwin","teichui","xiaoming"};
    char search = 0;
    printf("请输入您要模糊查询的字符\n");
    scanf("%c",&search);
    for (int i = 0; i < sizeof(str)/sizeof(char*); i++) {
        if(strchr(str[i],search) != NULL)
            printf("%s\n",str[i]);
    }
    return 0;
}
