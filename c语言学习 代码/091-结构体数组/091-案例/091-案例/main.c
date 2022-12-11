#include <stdio.h>
struct student {
    int age;
    int score;
    char name[100];
};

int main() {
    struct student student[3];
    int i;
    for(i = 0; i < 3; i++) {
        printf("请录入第%d个学生的姓名，年龄，成绩\n",i+1);
        scanf("%s%d%d",student[i].name,&student[i].age,&student[i].score);
    }
    
    for(i = 0; i < 3; i++)
        printf("第%d个学生的姓名%s，年龄%d，成绩%d\n",i+1,student[i].name,student[i].age,student[i].score);
    
    float sum = 0;
    for(i = 0; i < 3; i++) {
        sum += student[i].score;
    }
    printf("平均分%.2f\n",sum/3);
    return 0;
}
