#include <stdio.h>
void kerwin();
int main() {
    int sum = 100;
    printf("%d\n",sum);
    kerwin();
    kerwin();
    kerwin();
    if(1) {
        int a =10;
    }
    //printf("%d",a);
    for (int i = 0;i <= 10;i++) {
        static int mysum = 0;
        mysum += i;
        printf("mysum = %d\n",mysum);
    }
    return 0;
}
void kerwin() {
    static int x = 100;
    x++;
    printf("x = %d\n",x);
}

