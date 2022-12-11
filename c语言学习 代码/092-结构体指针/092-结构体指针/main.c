#include <stdio.h>
struct student {
    char* name;
    int age;
};

int main() {
//    struct student stu = {"kerwin",100};
//    struct student* myp = &stu;
//    printf("%s\n",(*myp).name);
//    printf("%s\n",myp-> name);
//    printf("%s\n",stu.name);
//    printf("%d\n",myp->age);

//    int a = 100;
//    int* p = &a;
//    *p = 200;
//    printf("%d\n",a);
    
    struct student stu[3] = {
        {"kerwin",100},
        {"xiaoming",18},
        {"tiechui",19}
    };
    
    struct student*p = stu;
    printf("%s\n",p[0].name);
    printf("%s\n",p->name);
    printf("%s\n",(p+1)->name);
    return 0;
}
