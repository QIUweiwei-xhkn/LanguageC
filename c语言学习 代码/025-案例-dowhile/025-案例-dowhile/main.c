#include <stdio.h>
int main() {
    /*int n = 1;
    int sum = 0;
    do {
        sum += n;
        n++;
    }while (n <=100);
    printf("sum = %d\n",sum);*/
    
    int score = 0;
    /*do {
        printf("请输入成绩0~100:\n");
        scanf("%d",&score);
    }while(score > 100);*/
    
    printf("请输入成绩0～100\n");
    scanf("%d",&score);
    while (score >100 ||score <0) {
        printf("成绩错误，请输入成绩0～100:\n");
        scanf("%d",&score);
    }
    int flag = score/10;
    switch (flag) {
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
    
