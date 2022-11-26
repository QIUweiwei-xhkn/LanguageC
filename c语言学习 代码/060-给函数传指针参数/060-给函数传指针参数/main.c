#include <stdio.h>
void func(int *a) {
    *a = 200;
}

void func2(char **a) {
    *a = "xiaoming";
}

void func3(int *arr) {
    *(arr+1) = 55;
}

void func4(int (*arr)[2]) {
    arr[1][1] = 66;
}

void func5(int **arr) {
    arr[0][1] = 77;
}

int main() {
    int x = 100;
    int *p = &x;
    func(p);
    printf("%d\n",x);
    
    char *str = "kerwin";
    func2(&str);
    printf("%s\n",str);
    
    int arr[3] = {11,22,33};
    func3(arr);
    printf("%d\n",arr[1]);
    
    int arr2[2][2] = {
        {11,22},
        {33,44}
    };
    func4(arr2);
    printf("%d\n",arr2[1][1]);
    
    int arr3[] = {11,22,33};
    int arr4[] = {44,55,66};
    int *arr5[] = {arr3,arr4};
    func5(arr5);
    printf("%d\n",arr3[1]);
}

