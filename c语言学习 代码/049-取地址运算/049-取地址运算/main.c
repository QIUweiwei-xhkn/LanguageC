#include <stdio.h>
void kerwin_scanf(int add) {
    printf("%p\n",add);
}
int main() {
    char name[7];
    printf("大侠，留下你的名字\n");
    scanf("%s",name);
    printf("%p\n",name);
    printf("%p\n",&name);
    kerwin_scanf(&name);
    return 0;
}
