#include <stdio.h>

int main() {
    FILE* fp;
    fp = fopen("kerwin.txt", "w+");
    if(fp == NULL)
        return 0;
    int num = 100;
    fprintf(fp, "%d",num);
    rewind(fp);
    int num2 = 0;
    fscanf(fp, "%d",&num2);
    printf("%d\n",num2);
    return 0;
}
