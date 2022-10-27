#include <stdio.h>
int main(){
    int a = 1;
    int result = 0;
    //result = 10 + a++;
    result = 10 + ++a;
    printf("%d %d\n",result,a);
    //循环语句时候
    int n = 10;
    int sum = n++ + n++ + n++;
    printf("%d  %d\n",sum,n);
}
