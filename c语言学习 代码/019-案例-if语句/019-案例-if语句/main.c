#include <stdio.h>
int main(){
    int num = 0;
    scanf("%d/\n",&num);          //在%d后加上/避免运行时输入数据后没反应或反应迟钝的情况
    /*if (num % 2 ==0){          //依旧为布尔类型 1为真，0为假
     printf("num为偶数\n");
     }
     else {
     printf("num为奇数\n");
     }*/
    /*if(num % 2){
     printf("奇数");*/
    
    /* if(num <0 ||num >100){
        printf("请输入一个0到100的数");
    }
    else if (num >=90){
        printf("A");
    }
    else if (num >=80){
        printf("B");
    }
    else if (num >=70){
        printf("C");
    }
    else if (num >=60){
        printf("D");
    }
    else {
        printf("E");
    }   */
    
    
    if ( num % 400 == 0 || (num % 4 ==0 &&num % 100 !=0)) {
        printf("闰年");
    }
    else {
        printf("平年");
        return 0;
    }
    
    
    
}
