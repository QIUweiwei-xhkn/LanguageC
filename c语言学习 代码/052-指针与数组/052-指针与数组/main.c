#include <stdio.h>
void swap(int *a) {
    int temp = *a;
    *a = *(a+1);
    *(a+1) = temp;
}

void sort(int *myarr, int length) {
    for(int i = 0; i < length -1; i++) {
        for(int j = 0; j < length-1-i; j++) {
            if(myarr[j] < myarr[j+1]) {
                swap(&myarr[j]);
            }
        }
    }
}

int main() {
//    int arr[] = {11,22,33,44};
//    int *p = arr;
//    printf("%p\n",arr);
//    printf("%p\n",&arr[1]);
//    printf("%p\n",arr+1);
//    printf("%p\n",&arr+1);
//    printf("%p\n",p+1);
//    printf("%d\n",*(p+2));
    
    int arr[] = { 44,11,33,7,2,1,3,66 };
        sort(arr, sizeof(arr) / sizeof(int));
        for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
            printf("%d  ", arr[i]);
        }printf("\n");
    return 0;
}
