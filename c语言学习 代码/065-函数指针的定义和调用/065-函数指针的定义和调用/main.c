#include <stdio.h>
int max(int a,int b) {
    if(a > b) {
        return a;
    }
    else {
        return b;
    }
}

int main() {
    int (*p)(int, int) = max;
    int res = (*p)(30,40);
    printf("%d\n",res);
}
