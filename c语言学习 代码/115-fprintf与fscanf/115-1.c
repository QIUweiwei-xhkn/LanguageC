#include <stdio.h>
#include <stdlib.h>
typedef struct student {
    char name[100];
    int score;
}STU;

int main() {
    int num = 0;
    printf("请输入录入的人数\n");
    scanf("%d",&num);
    STU* stup = (STU*)malloc(num * sizeof(STU));
    int i;
    for(i = 0; i < num; i++) {
        printf("请录入姓名，成绩\n");
        scanf("%s %d",stup[i].name,&stup[i].score);
    }
    FILE* fp;
    fp = fopen("kerwin.txt", "w+");
    if(fp == NULL)
        return 0;
    for(i = 0; i < num; i++) {
        printf("%s,%d\n",(stup + i)->name,(stup + i)->score);
        fprintf(fp, "姓名:%s|成绩:%d\n",(stup + i)->name,(stup + i)->score);
    }
    free(stup);
    fclose(fp);
    return 0;
}
