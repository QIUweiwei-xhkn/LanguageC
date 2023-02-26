#define TYPE 1
struct student {
    char name[100];
    int age;
};

enum week{A = 1,B,C,D,E,F,G};

typedef struct teacher {
    char name[100];
    int age;
}TEA;

extern void func(void);
