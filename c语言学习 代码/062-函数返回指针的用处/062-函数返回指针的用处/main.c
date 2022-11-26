#include <stdio.h>
char* func(void) {
    char* p ="kerwin";
    return p;
}

int* swap(int a,int b) {
    int temp = a;
    a = b;
    b = temp;
    static int arr[2];
    arr[0] = a;
    arr[1] = b;
    return arr;
}

void sort(int *myarr,int length) {
    for(int i = 0; i <length -1; i++) {
        for(int j = 0; j < length -1 -i; j++) {
            if(myarr[j] > myarr[j+1]) {
                int *p = swap(myarr[j],myarr[j+1]);
                myarr[j] = p[0];
                myarr[j+1] = p[1];
            }
        }
    }
}

int main() {
    char* p1 = func();
    printf("%s\n",p1);
    int arr[] = {44,11,33,7,2,1,3,66};
    sort(arr,sizeof(arr)/sizeof(int));
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++) {
        printf("%d\n",arr[i]);
    }
    return 0;
}
