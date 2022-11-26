#include <stdio.h>
#include <stdlib.h>
#define TOTAL 100
typedef char(*TYPE_P)[TOTAL];
int main() {
    int number = 0;
    printf("请输入学生的人数\n");
    scanf("%d",&number);
    TYPE_P p = (TYPE_P) calloc(number,TOTAL);
    if(!p) return 0;
    printf("请按学号输入学生的名字\n");
    for(int i = 0; i < number; i++) {
        printf("%d ",i+1);
        scanf("%s",*(p+i));
    }
    for(int i = 0; i < number; i++) {
        printf("%s\n",p[i]);
    }
    free(p);
    return 0;

}

//typedef char(*TYPE_P)[TOTAL];
//int main() {
//    int number = 0;
//    //char (*p)[100] =  {"kerwin","tiechui","xiaoming"}
//    scanf("%d", &number);
//
//    TYPE_P p = (TYPE_P) calloc(number, TOTAL);
//    if (!p) return 0;
//    for (int i = 0; i < number; i++) {
//        scanf("%s", *(p + i), TOTAL);
//    }
//
//    for (int i = 0; i < number; i++) {
//        printf("%s\n", p[i]);
//    }
//
//    // arr[] = {1,2,3} arr[0]  *p
    
