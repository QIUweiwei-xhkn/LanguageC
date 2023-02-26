#include <stdio.h>

int main() {
    enum week {mon = 1,tue,wed,thu,fri,sat,sum};
    enum week day;
    day = mon;
//    day = sum;
    //sum = 9;   错误，注意 只可以在定义时赋值
    printf("%d\n",day);
    printf("%d\n",sat);
    printf("%d\n",sum);
    return 0;
}
