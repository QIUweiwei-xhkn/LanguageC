#include <stdio.h>
void kerwin();

void init() {
    printf("初始化");
    kerwin();
}

static void kerwin() {
    printf("hello kerwin");
}
