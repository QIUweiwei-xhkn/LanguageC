#include <stdio.h>
typedef struct ADDR {
    char province[100];
    char city[100];
    int code;
} SADDR;
struct Student {
    char name[100];
    int age;
    int score;
};

int main() {
    struct Student student0,student1;
//    struct Person {
//        char name[100];
//        int age;
//    }person0,person1;
//    struct Person person2,person3;
    
    struct {
        char name[100];
        int age;
    }person0,person1;
    
    struct ADDR addr0,addr1;
    SADDR addr2,addr3;
    return 0;
}
