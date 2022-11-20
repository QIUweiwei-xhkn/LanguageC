#include <stdio.h>
void sort(int (*p)[10]) {
    
}
int main() {
    int arr[][3] = {
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };
    printf("%d\n",arr[1][1]);
    printf("%p\n",arr);
    printf("%p\n",(*arr+1)+1);
    printf("%p\n",arr+2);
    int (*p)[3] = arr;
    for(int i = 0; i < 3; i++) {
        for(int j = 0;j < 3; j++) {
            printf("%d  ",arr[i][j]);
            printf("%d  ",*((*p+i)+j));
            printf("\n");
        }
    }
    int arr1[3][10];
    int arr2[6][10];
    sort(arr1);
    sort(arr2);
    return 0;
}
