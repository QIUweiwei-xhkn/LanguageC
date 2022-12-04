#include <stdio.h>

int main() {
    char str[100];
    sprintf(str, "尊敬的%s先生/女士","kerwin");
    printf("%s\n",str);
    char time[100];
    sprintf(time, "%d/%d/%d",2022,8,15);
    printf("%s\n",time);
    return 0;
}
