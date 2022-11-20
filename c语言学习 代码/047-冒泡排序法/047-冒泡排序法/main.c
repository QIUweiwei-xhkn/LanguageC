#include <stdio.h>
int main() {
    int arr[] = {44,11,33,7,2,1,3,66};
//    int temp = arr[0];
//    arr[0] = arr[1];
//    arr[1] = temp;
//    printf("%d,%d\n",arr[0],arr[1]);
    
//    for(int i = 0;i < sizeof(arr)/sizeof(int)-1;i++) {
//        if(arr[i] > arr[i+1]) {
//            printf("%d ",arr[i+1]);
//            int temp = arr[i];
//            arr[i] = arr[i+1];
//            arr[i+1] = temp;
//        }
//    }printf("\n");
    
    
//    for(int i = 0;i < sizeof(arr)/sizeof(int)-1-1;i++) {
//        if(arr[i] > arr[i+1]) {
//            printf("%d ",arr[i+1]);
//            int temp = arr[i];
//            arr[i] = arr[i+1];
//            arr[i+1] = temp;
//        }
//    }printf("\n");
   
    
//    for(int i = 0;i < sizeof(arr)/sizeof(int)-1-1-1;i++) {
//        if(arr[i] > arr[i+1]) {
//            printf("%d ",arr[i+1]);
//            int temp = arr[i];
//            arr[i] = arr[i+1];
//            arr[i+1] = temp;
//        }
//    }printf("\n");

    for (int i = 0; i < sizeof(arr) / sizeof(int) - 1; i++) {
            for (int j = 0; j < sizeof(arr) / sizeof(int) - 1-i; j++) {
                if (arr[j] > arr[j + 1]) {
                    //printf("%d\n", arr[i + 1]);
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }



    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        printf("%d  ", arr[i]);
    }printf("\n");
        
}
