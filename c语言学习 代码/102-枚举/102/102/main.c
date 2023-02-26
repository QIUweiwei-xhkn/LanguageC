#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[100];
    int score;
}STU;

typedef struct
{
    char name[100];
    int salary;
    int iNumber;
}TEA;

typedef union {
    STU student;
    TEA teacher;
}ANY;

enum TYPE {STUDENT = 1,TEACHER} mytype;
void save1(STU* student) {
    printf("save-student-%s-%d\n",student->name,student->score);
}
void save2(TEA* teacher) {
    printf("save-teacher-%s-%d-%d\n",teacher->name,teacher->salary,teacher->iNumber);
}
void save(ANY* anydate,int type) {
    if(type == STUDENT)
        printf("save-student-%s-%d\n",anydate->student.name,anydate->student.score);
    else
        printf("save-teacher-%s-%d-%d\n",anydate->teacher.name,anydate->teacher.salary,anydate->teacher.iNumber);
}

int main() {
    printf("请输入要录入的是学生，还是老师的信息，学生输入1，老师输入2\n");
    int type = 0;
    scanf("%d",&type);
    if(type == STUDENT) {
        ANY* any =(ANY*)malloc(sizeof(ANY));
        if(!any) return 0;
        printf("请输入学生的姓名，成绩\n");
        scanf("%s%d",any->student.name,&any->student.score);
        save(any,type);
    }
    else if(type ==TEACHER) {
        ANY* any =(ANY*)malloc(sizeof(ANY));
        if(!any) return 0;
        printf("请输入老师的名字，工资，社保卡号\n");
        scanf("%s%d%d",any->teacher.name,&any->teacher.salary,&any->teacher.iNumber);
        save(any,type);
    }
    else
        printf("输入有误\n");
    return 0;
}
