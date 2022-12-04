#include <stdio.h>

int main() {
    char* address =  "大连 辽宁 高新";
    char str[3][100];
    sscanf(address,"%s %s %s",str[0],str[1],str[2]);
    printf("%s\n",str[1]);
    return 0;
}
