#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
//    char* p = (char*)malloc(120);
//    if(!p) return 0;
//    printf("请输入字符串\n");
//    scanf("%s",p);
//    char* str = "先生/女士";
//    strcat(p,str);
//    printf("%s\n",p);
//    free(p);
    
    char* str = "先生/女士";
    char mystr[100] = {'k','e','r','w','i','n'};
    strncat(mystr,str,4);
    printf("%s\n",mystr);
return 0;
}

