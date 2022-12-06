#include <stdio.h>

int main() {
    char a[4][32],b[32][4];
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 32; j++) {
            a[i][j] = i*32 +j;
            b[j][i] = a[i][j];
        }
    }
    for(int i = 0; i < 32; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%c",b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
