#include <stdio.h>
typedef struct student {
    char* name;
    int age;
}STU;

int main() {
    STU student[3];
    student[0].name = "kerwin";
    student[1].age = 19;
    printf("%s\n",student[0].name);
    printf("%d\n",student[1].age);
    return 0;
}
