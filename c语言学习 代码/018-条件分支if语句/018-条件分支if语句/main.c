#include <stdio.h>
int main(){
    int sum = 49;
    if(sum > 200){
        sum -= 10;
    }
    else if (sum > 100){
        sum -= 5;
    }
    else if (sum > 50){
        sum -= 3;
    }
    else {
        printf("你真抠!\n");
    }
    printf("sum = %d\n",sum);
}
