#include<stdio.h>
void sort(int (*p)[10]) {

 //排序
}
int main()
{
    //int arr[] = { 11,22,33 };

    //int* p = arr; //整型指针。

    //至少指向二维数组的指针，数组指针，，，，

    int arr[][3] = {
        {10,20,30},//一班
        {40,50,60},//二班
        {70,80,90}//三班
    };

    //printf("%d\n", arr[1][1]);
    printf("%p\n", arr);
    printf("%d\n", *(* (arr + 1) + 1));
    printf("%p\n", arr + 2);
    //int *p[3]
    int(*p)[3] = arr;//指向二维数组的指针
    for (int i = 0; i < 3; i++) {
    
        for (int j = 0; j < 3; j++) {
            /*printf("%d\n", arr[i][j]);*/

            printf("%d\n", *(* (p + i) + j));
        }
    }

    int arr1[5][10];
    int arr2[6][10];
    //int arr3[5][5];


    sort(arr1);
    sort(arr2);
    //sort(arr3);

    //int (*p)[10][10][10]
}