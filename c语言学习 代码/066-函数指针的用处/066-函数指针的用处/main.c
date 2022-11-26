#include <stdio.h>
void test(void) {
    printf("test方法调用\n");
}

void func(void (*ptest)(void)) {
    printf("开始工作\n");
    ptest();
    printf("结束工作\n");
}

int main() {
    func(test);
}
