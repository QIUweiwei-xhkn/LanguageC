#include <stdio.h>
#include <stdlib.h>
void toBin(int value) {
    int temp[10] = {0};
    int i = 0;
    while(value) {
        temp[i] = value % 2;
        value = value / 2;
        i++;
    }
    for(i = i - 1; i >= 0; i--)
        printf("%d ",temp[i]);
    printf("\n");
}

void toBin2(int value) {
    char string[100];
    scanf("%s",string);
    printf("%s\n",string);
}
int main() {
    int x = -5;
    toBin(x);
    toBin2(x);
    printf("%x",x);
    return 0;
}
