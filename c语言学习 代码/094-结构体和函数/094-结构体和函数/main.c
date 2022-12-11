#include <stdio.h>
#include <stdlib.h>
typedef struct student {
    char name[100];
    int score;
}STU;
void input(STU *p) {
    printf("请输入姓名，成绩\n");
    scanf("%s%d",p->name,&p->score);
}
float sumfunc(STU *p,int num) {
    float sum = 0;
    for(int i = 0; i < num; i++) {
        sum +=p[i].score;
    }
    return sum;
}

int main() {
    int num = 0;
    printf("请输入录入的人数\n");
    scanf("%d",&num);
    STU* stup = (STU*)malloc(num *sizeof(STU));
    for(int i = 0; i < num; i++) {
        input(stup+i);
    }
    for(int i = 0; i < num; i++) {
        printf("%s,%d\n",(stup+i)->name,(stup+i)->score);
    }
    float sum = 0;
    sum = sumfunc(stup,num);
    printf("平均成绩%.2f\n",sum/num);
    return 0;
}
