#include <stdio.h>
#include <stdlib.h>
int main() {
//    int arr[100];//静态申请内存
//    int *p = arr;
    
//    int *p = (int*)malloc(4*4);
//    if(!p) return 0;
//    p[0] = 100;
//    p[1] = 200;
//    p[2] = 300;
//    p[3] = 400;
//    for (int i = 0; i < 3; i++) {
//        printf("%d\n",p[i]);
//    }
//    free(p);
    
    printf("请输入班级的人数\n");
    int number = 0;
    scanf("%d",&number);
    int*p = (int*)malloc(sizeof(int)*number);
    if(!p) return 0;
    for(int i = 0;i < number; i++) {
        printf("请输入学号%d的学生的成绩\n",i+1);
        scanf("%d",&p[i]);
    }
    for(int i = 0; i < number; i++) {
        printf("学号为%d的学生成绩：%d\n",i+1,p[i]);
    }
    free(p);
    return 0;
}
