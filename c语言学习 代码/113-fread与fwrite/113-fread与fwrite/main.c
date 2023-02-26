#include <stdio.h>

int main() {
    FILE* fp1,* fp2;
    fp1 = fopen("kerwin.txt","r");
    if(fp1 == NULL) {
        printf("打开失败\n");
        return 0;
    }
    fp2 = fopen("copy.txt","w");
    if(fp1 == NULL) {
        printf("打开失败\n");
        return 0;
    }
    char str[100];
    fread(str,sizeof(char),40,fp1);
    printf("*%s*\n",str);
    fwrite(str, sizeof(char), 40, fp2);
    fclose(fp1);
    int error1 = fclose(fp1);
    if(error1 == 0)
        printf("文件关闭失败\n");
    else
        printf("文件关闭成功\n");
    fclose(fp2);
    return 0;
}
