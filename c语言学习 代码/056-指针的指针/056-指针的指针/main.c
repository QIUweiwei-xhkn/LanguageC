#include <stdio.h>
int main() {
//    char *str1 = "kerwin";
//    char *str2 = "teichui";
//    char *str3 = "xiaoming";
//    char *str[] = {str1,str2,str3};//等于 char *str[] = {"kerwin","teichui","xiaoming"}; 指针数组
//    for(int i = 0; i < sizeof(str)/sizeof(char*); i++) {
//        printf("%p\n",str[i]);
//    }
//    for(int i = 0; i < sizeof(str)/sizeof(char*); i++) {
//        printf("%s\n",str[i]);
//        printf("%c\n",*str[i]);
//        printf("%c\n",*(str[i]+1));
//    }
    
   
    int arr1[] = {10,20,30};
    int arr2[] = {40,50,60};
    int arr3[] = {70,80,90};
    int *arr[] = {arr1,arr2,arr3};
//    printf("%p\n",arr1);
//    printf("%p\n",arr2);
//    printf("%p\n",arr3);
//    for(int i = 0; i < sizeof(arr)/sizeof(int*); i++) {
//        printf("%d\n",arr[i][0]);
//        printf("%d\n",*(arr[i]+1));
//    }
    int **p = arr;
    printf("%p\n",arr);
    printf("%p\n",p);
    printf("%d\n",arr[0][1]);
    printf("%d\n",p[0][1]);
    printf("%d\n",*(*(p+1)+1));
    
    
    int a = 100;
    int *q1 = &a;
    int **q2 = &q1;
    printf("%p\n",q2);
    printf("%p\n",&q1);
    printf("%p\n",q2[0]);
    printf("%p\n",q1);
    printf("%p\n",&a);
    printf("%d\n",q2[0][0]);
    
    
    return 0;
}
