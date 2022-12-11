#include <stdio.h>
//#include <string.h>

struct student
{
    int age;
    int score;
    //char* name;
    char name[100];
};

int main() {
//    struct student student1 = {
//        18,
//        100,
//        "kerwin"
//    };
//
//    struct student student2 = student1;
//    strcpy(student2.name,"tiechui");
//    printf("%s\n",student2.name);
    
//    char p[100];
//    scanf("%s",p);
//    printf("%s\n",p);
    
    struct student student3;
//    int age;
//    printf("录入年龄\n");
//    scanf("%d",&student3.age);
//    printf("录入成绩\n");
//    scanf("%d",&student3.score);
//    char name[100];
//    printf("录入姓名\n");
//    scanf("%s",student3.name);
    
    printf("请录入姓名 年龄 成绩\n");
    scanf("%s %d %d",student3.name,&student3.age,&student3.score);
    printf("%s,%d,%d\n",student3.name,student3.age,student3.score);
    return 0;
}
