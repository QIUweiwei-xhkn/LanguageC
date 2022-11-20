#include <stdio.h>
int main() {
//    char *str1 = "kerwin";
//    char *str2 = "teichui";
//    char *str3 = "xiaoming";
    char *str[3] = {"kerwin","teichui","xiaoming"};
    for(int i = 0; i < sizeof(str)/sizeof(char *); i++) {
        printf("%s\n",str[i]);
    }
    for(int i = 0; i < sizeof(str)/sizeof(char *); i++) {
        printf("%p\n",str[i]);
    }
    
//    int *arr[3] = {11,22,33};
//    for(int i = 0; i < 3; i++) {
//        printf("%d\n",arr[i]);
//    }

    int arr1[] = {10,20,30};
    int arr2[] = {40,50,60};
    int arr3[] = {1,2,3};
    int *arr[] = {arr1,arr2,arr3};
//    printf("%p ",arr1);
//    printf("%p ",arr2);
//    printf("%p ",arr3);
    for(int i = 0; i < sizeof(arr)/sizeof(int *); i++) {
        printf("%d\n",*(arr[i]+1));
    }
    return 0;
}
