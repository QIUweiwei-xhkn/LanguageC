#include <stdio.h>
#include <string.h>

typedef struct address {
    char* province;
    char* city;
    char* district;
}ADDR;

typedef struct student {
    char name[100];
    int age;
    struct address address;
}STU;

int main() {
    STU student0 = {
        "kerwin",
        100,
        {
            "辽宁",
            "大连",
            "高新园区"
        }
    };
    STU student1 = {
        "xiaoming"
    };
    //student1.name = "tiechui";
    //strcpy(student1.name,"tiechui");
    
    strcpy(student1.name,"tiechui");
//    student1.name = "tiechui";//错误！student name是数组名字，是一个常量，
    student1.age = 18;
    //student1.address[0] = "山东";
    student1.address.province = "山东";
    printf("%s,%d\n",student1.name,student1.age);
    printf("%s\n",student1.address.province);
    return 0;
}
