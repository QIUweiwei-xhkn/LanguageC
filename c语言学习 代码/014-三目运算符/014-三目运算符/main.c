#include <stdio.h>
int main(){
    int sum = 200;
    /*sum = sum > 200 ? sum *0.7 :sum;
    printf("%d",sum);*/
    if (sum >= 200){
        sum *=0.7;//六七行相当于第四，三目运算更简单
    }
    printf("sum = %d",sum);
}
