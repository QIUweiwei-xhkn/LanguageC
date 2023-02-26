#include <stdio.h>
#include <string.h>
int main() {
    printf("注册密码：");
    char password[7] = "";
    scanf("%s",password);
    FILE* fp;
    fp = fopen("kerwin.txt", "w+");
    if(fp == NULL)
        return 0;
    fputs(password, fp);
    long length = ftell(fp);
    if(length == 6)
        printf("注册成功\n");
    else{
        printf("注册失败\n");
        return 0;
    }
    printf("登陆密码：");
    scanf("%s",password);
    char password_db[7];
    fseek(fp,-6,2);
    fgets(password_db, 7, fp);
    int result = strcmp(password,password_db);
    if(result == 0)
        printf("登录成功\n");
    else
        printf("登录失败\n");
    return 0;
}
