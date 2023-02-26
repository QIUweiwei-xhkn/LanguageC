#include <stdio.h>

int main() {
    FILE* fp;
    //linux "kerwin.txt" "./kerwin.txt"   相对路径
    //window "kerwin.txt" ".\\kerwin.txt" 相对路径
    
    //E:\\1-kerwin\\C\\code\\hello\\hello\\kerwin.txt 绝对路径
    //fp = fopen("kerwin.txt","a+");
    fp = fopen("kerwin.txt","w");
    if(fp == NULL) {
        printf("打开失败\n");
        perror("fopen");
        return 0;
    }
    
    printf("成功\n");
    int eclose = fclose(fp);
    if(eclose == 0) {
        printf("关闭成功\n");
    }
    else
        printf("关闭失败\n");
    return 0;
}
