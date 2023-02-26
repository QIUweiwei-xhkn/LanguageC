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
    printf("注册成功\n");
    printf("登录密码：");
    scanf("%s",password);
    char password_db[7] = "";
    fseek(fp, -6, SEEK_END);
    fgets(password_db, 7, fp);
    int result = strcmp(password, password_db);
    if(result == 0)
        printf("登录成功\n");
    else
        printf("登录失败%d\n",result);
    return 0;
}
