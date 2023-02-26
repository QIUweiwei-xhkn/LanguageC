#include <stdio.h>
int main() {
    FILE* fp1, *fp2;
    char ch;
    fp1 = fopen("kerwin.txt","r");
    if(fp1 == NULL) {
        printf("打开失败\n");
        return 0;
    }
    fp2 = fopen("copy.txt","a");
    if(fp2 == NULL) {
        printf("打开失败\n");
        return 0;
    }

    while((ch = fgetc(fp1)) != EOF) {
        fputc(ch, stdout);
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
