#include <stdio.h>
int max(int a, int b) {
    if(a > b) {
        return a;
    }
    else {
        return b;
    }
}

int min(int a, int b) {
    if(a < b) {
        return a;
    }
    else {
        return b;
    }
}

int add(int a, int b) {
    return a+b;
}

int sub(int a, int b) {
    return a-b;
}

int main() {
    int(*p[4])(int, int) = {max,min,add,sub};
    int res1 = (*p)(1,2);
    printf("%d\n",res1);
    int res2 = (p[1])(1,2);
    printf("%d\n",res2);
    int res3 = (p[2])(1,2);
    printf("%d\n",res3);
    int res4 = (p[3])(1,2);
    printf("%d\n",res4);
    return 0;
}

