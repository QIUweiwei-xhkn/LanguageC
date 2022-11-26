#include <stdio.h>
#define KERWIN_INT 11
#define KERWIN_FLOAT 22

void swap(void* a, void* b,int type) {
    if (type == KERWIN_INT) {
        int temp = *(int*)a;
        *(int*)a = *(int*)b;
        *(int*)b = temp;
    }
    else if (type == KERWIN_FLOAT) {
        float temp = *(float *)a;
        *(float*)a = *(float*)b;
        *(float*)b = temp;
    }
    
}

int main() {
//    int num = 100;
//        char* p = NULL;
//        if (p == NULL) {
//            printf("%p\n", p);
//            p = "kerwin";
//        }
//        printf("%p\n", p);
//
//        void* vp = &num; // 只能保存指针的值， 并不会记录指针指向的类型。
//        printf("%d\n", *(int *)vp);
//
//
//        char* str[2] = { "kerwin","tiechui" };
//
//        void* arrp = str;
//        printf("%c\n", ((char **)arrp)[0][1]);

    int a = 100;
    int b = 200;
    float c= 1.1f;
    float d = 2.2f;
    swap(&a, &b,KERWIN_INT);
    printf("%d\n",a);
    printf("%d\n",b);
    swap(&c, &d,KERWIN_FLOAT);
    printf("%f\n",c);
    printf("%f\n",d);

    return 0;
}
