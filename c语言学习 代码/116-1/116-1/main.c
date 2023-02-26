#include <stdio.h>

int main() {
    FILE* fp;
    fp = fopen("kerwin.txt", "r+");
    if(fp == NULL)
        return 0;
    fseek(fp, 4, 0);
    char bir[100];
    fgets(bir,100,fp);
    printf("%s",bir);
    return 0;
}
