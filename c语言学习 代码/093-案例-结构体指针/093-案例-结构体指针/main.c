#include <stdio.h>
#include <stdlib.h>
typedef struct student {
    char name[100];
    int score;
}STU;

int main() {
    int num = 0,i;
    printf("请输入录入的人数\n");
    scanf("%d",&num);
    STU* stu = (STU*)malloc(num*sizeof(STU));
    for(i = 0;i < num; i++) {
        printf("请录入姓名，成绩\n");
        scanf("%s%d",stu[i].name,&stu[i].score);
    }
    
    for(i = 0; i < num; i++)
        printf("%s,%d\n",(stu+i)->name,(stu+i)->score);
    
    float sum = 0;
    for(i = 0; i < num; i++)
        sum += (stu+i)->score;
    
    printf("平均成绩%.2f\n",sum/num);
    
    return 0;
}
