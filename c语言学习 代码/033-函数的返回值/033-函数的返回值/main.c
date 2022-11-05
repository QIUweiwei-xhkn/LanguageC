#include <stdio.h>
#include <stdbool.h>
int kerwin_sum(int x, int y, int z) {
    int sum = 0;
    sum = x + y + z;
    printf("%d", sum);
    return sum;
}

//空返回值
void kerwin_printf() {
}

int kerwin_isprime(int n) {
    int i;
    for(i = 2;i <= n/2;i ++) {
        if (n % i == 0 ) {
            return false;
        }
    } return true;
}

int main() {
    int mysum = kerwin_sum(10, 20, 30);
    printf("%d",mysum);
    for (int i = 300;i <=500;i++) {
        if(kerwin_isprime(i)) {
            printf("%d\n",i);
        }
    }
    return 0;
}
