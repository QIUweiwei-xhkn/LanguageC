#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void split(char *str,char **splitStr,char *p) {
    splitStr[0] = strtok(str,p);
//    printf("%s\n",splitStr[0]);
    int i = 0;
    while(splitStr[i]) {
        i++;
        splitStr[i] = strtok(NULL,p);
    }
}
int main() {
    char str[100] =  "辽宁%大连%高新园区%aaa,bbb,ccc";
    char* splitStr[100];
//    printf("%s\n",str);
//    printf("%s\n",splitStr[0]);
//    printf("%s\n",splitStr[1]);
//    printf("%s\n",splitStr[2]);
    split(str,splitStr,"%,");
    int m = 0;
    while(splitStr[m]) {
        printf("%s\n",splitStr[m]);
        m++;
    }
    return 0;
    
}
