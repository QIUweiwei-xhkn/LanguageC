#include <stdio.h>
extern void kerwin();
int a = 100;
int main() {
    printf("%d\n",a);
    kerwin();
    int a = 300;
    printf("%d\n",a);
}
