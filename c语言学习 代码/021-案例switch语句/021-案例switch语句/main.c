#include <stdio.h>
int main(){
    /*int month = 4;
    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31天\n");
            break;
        case 2:
            printf("28天\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30天\n");
            break;
        default:
            printf("错误\n");
    }*/
    
    
    int score = 0;
    printf("请输入成绩0-100:\n");
    scanf("%d",&score);
    int flag = score/10;
    printf("%d\n",flag);
    switch (flag){
        case 10:
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        default:
            printf("E\n");
    }
    
}
