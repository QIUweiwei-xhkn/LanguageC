#include <stdio.h>
int main() {
    int arr[] = { 1,44,11,33,7,2,3,66 };
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++) {
        int index = i;
        for(int j = i+1; j < sizeof(arr)/sizeof(int); j++) {
            if(arr[j] < arr[index]) {
                index = j;
            }
        }if(index != i) {
            int temp = arr [i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
    }
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++) {
        printf("%d ",arr[i]);
    }printf("\n");
    return 0;
}
