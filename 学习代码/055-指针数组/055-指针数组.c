#include<stdio.h>

int main()
{
    char* str1 = "kerwin";
    char* str2 = "tiechui";
    char* str3 = "xiaoming";

    //char* str[3] = { str1,str2,str3 };

    char *str[3] = { "kerwin","tiechui","xiaoming" };

    /*for (int i = 0; i < sizeof(str) / sizeof(char*); i++) {
        printf("%p\n", str[i]);
    }*/
    for (int i = 0; i < sizeof(str) / sizeof(char*); i++) {
        //printf("%c\n", *str[i]);
        printf("%s\n", str[i]);
    }


   /* int* arr[3] = { 11,22,33 };

    for (int i = 0; i < 3; i++) {
        printf("%d\n", *arr[i]);
    }*/

    int arr1[] = { 10,20,30 };
    int arr2[] = { 40,50,60 };

    int arr3[] = { 1,2,3 };

    int* arr[] = { arr1,arr2,arr3 };
 /*   printf("%p\n", arr1);
    printf("%p\n", arr2);
    printf("%p\n", arr3);*/
    for (int i = 0; i < sizeof(arr) / sizeof(int*); i++) {
        //printf("%d\n", arr[i][0]);

        printf("%d\n", *(arr[i]+1));
    }
}