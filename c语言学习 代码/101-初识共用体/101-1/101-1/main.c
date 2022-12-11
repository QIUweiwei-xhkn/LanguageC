#include <stdio.h>
#include <stdlib.h>
#define STUDENT 1
#define TEACHER 2
typedef struct {
    char name[100];
    int score;
}STU;

typedef struct {
    char name[100];
    int salary;
    int iNumber;
}TEA;

typedef union {
    STU student;
    TEA teacher;
}ANY;

void save1(STU *student) {
    printf("save-student-%s-%d\n",student->name,student->score);
}

void save2(TEA *teacher) {
    printf("save-teacher-%s-%d-%d\n",teacher->name,teacher->salary,teacher->iNumber);
}

void save(ANY *anydata,int type) {
    if(type ==STUDENT)
        printf("save-student-%s-%d\n",anydata->student.name,anydata->student.score);
    else
        printf("save-teacher-%s-%d-%d\n",anydata->teacher.name,anydata->teacher.salary,anydata->teacher.iNumber);
}
int main() {
    printf("请输入要录入的是学生还是老师的信息，学生输入1，老师输入2\n");
    int type = 0;
    scanf("%d",&type);
    if (type == STUDENT) {
        ANY *any = (ANY*)malloc(sizeof(ANY));
        if(!any) return 0;
        printf("请输入学生的姓名和成绩\n");
        scanf("%s%d",any->student.name,&any->student.score);
        save(any,type);
        free(any);
    }
    else if(type == TEACHER) {
        ANY* any = (ANY*)malloc(sizeof(ANY));
        if(!any) return 0;
        printf("请输入老师的名字，工资和社保号\n");
        scanf("%s%d%d",any->teacher.name,&any->teacher.salary,&any->teacher.iNumber);
        save(any, type);
        free(any);
    }
    else
        printf("输入错误，要录入学生信息请输入1，要录入老师信息请输入2\n");
    return 0;
}
