#include <stdio.h>
struct add {
    int adda;
    char addb;
};
struct stu {
    char a[10];
    int b;
};
int main() {
    struct stu student;
    struct add adda;
    printf("%ld\n",sizeof(adda));
    printf("%ld\n",sizeof(student));
    return 0;
}
