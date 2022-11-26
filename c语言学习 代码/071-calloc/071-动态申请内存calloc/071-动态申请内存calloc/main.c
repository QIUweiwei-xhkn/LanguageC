#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("请输入班级的人数\n");
    int number = 0;
    scanf("%d",&number);
    int*p = (int*)calloc(number,sizeof(int));
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
