#include <stdio.h>
struct stu {
    char gender;
    int age;
    int score;
};

int main() {
    struct stu student;
    printf("%ld\n",sizeof(student));
    printf("%p\n",&student.gender);
    printf("%p\n",&student.age);
    return 0;
}
