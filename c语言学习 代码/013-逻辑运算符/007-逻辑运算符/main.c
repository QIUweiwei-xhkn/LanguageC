#include <stdio.h>
int main(){
    printf("%d\n",1 <2 && 3<4);//条件成立为1，条件不成立为0？（布尔类型）
    //&& 且条件，两个为真才为真，一个为假则假
    printf("%d\n",1 > 2||3<4);//  ||或条件，一个为真则真，两个为假才假
    printf("%d\n",!(1<2));// ! 非条件，原真得假，原假得真
    
    
    int price = 250;
    int type = 1;
    int day = 6;
    if (price >200 && type == 1 && !(day ==5 ||day ==7)){
        price *=0.7;
        printf("%d\n",price);
    }
    
}
