#include <stdio.h>
struct stu {
    char a;
    double b;
};

int main() {
    struct stu student;
    printf("%ld\n",sizeof(student));
    return 0;
}
