#include <stdio.h>
typedef int(*kerwinerwei)[2];
int* func1(void) {
    static int a = 100;
    int *p = &a;
    return p;
}

int* func2() {
    static int arr[] = {11,22,33};
    return arr;
}

kerwinerwei func3() {
    static int arr[][2] = {
        {11,22},
        {33,44}
    };
    return arr;
}

int **func4() {
    int arr1[] = {11,22};
    int arr2[] = {33.44};
    static int* arr[2];
    arr[0] = arr1;
    arr[1] = arr2;
    return arr;
}

int main() {
    int* p = func1();
    printf("%d\n",*p);
    int* p2 = func2();
    printf("%d\n",p2[1]);
    int(*p3)[2] = func3();
    printf("%d\n",p3[1][1]);
    int** p4 = func4();
    printf("%d\n",p4[1][0]);
    return 0;
}
