#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM 100
typedef char(*PNAME)[NUM];
int main() {
    int person = 0;
    char personStr[100];
    printf("请输入录入的人数\n");
    scanf("%s", personStr);
    strcat(personStr, "");
    person = atoi(personStr);
//    printf("%d\n",person);

    PNAME name = (PNAME)calloc(person, NUM);
    int* score = (int*)malloc(sizeof(int) * person);
    if (name == NULL || score == NULL) return 0;
    for (int i = 0; i < person; i++) {
        printf("录入姓名\n");
        scanf("%s", *(name + i));
        printf("录入成绩\n");
        scanf("%d", &score[i]);
    }
    char search[100];
    printf("请输入你要查询的姓名\n");
    scanf("%s", search);
    strcat(search, "");
    for (int i = 0; i < person; i++) {
            if (strstr(name[i], search) != NULL) {
                printf("姓名：%s,成绩:%d\n", name[i], *(score+i));
                }
            }
        free(score);
        free(name);
    return 0;
}
