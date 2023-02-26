#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE* fp;
    fp = fopen("kerwin.txt", "rb+");
    if(fp == NULL) return 0;
    fseek(fp, 0, 2);
    long length = ftell(fp);
    char* str = (char*)malloc(length + 1);
    if(str == NULL)
        return 0;
    rewind(fp);
    fread(str,length,1,fp);
    str[length] = '\0';
    printf("%s\n",str);
    fclose(fp);
    free(str);
    return 0;
}
