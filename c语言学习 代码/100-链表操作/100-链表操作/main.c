#include <stdio.h>
#include <stdlib.h>

struct student {

    char name[100];//姓名
    int iNumber;//学号
    struct student* pNext;
};

int count = 0;

struct student* Create(void) {

    struct student* pHead = NULL;
    struct student* pEnd, * pNew;


    pEnd = pNew = (struct student*)malloc(sizeof(struct student));
    if (!pNew) return NULL;
    printf("请输入名字和学号,学号为0,既表示停止录入\n");
    scanf("%s", pNew->name);
    scanf("%d", &pNew->iNumber);

    pNew->pNext = NULL;
    if (pNew->iNumber != 0) {
        pHead = pNew;
    }

    while (pNew->iNumber != 0) {
        count++;
        pNew = (struct student*)malloc(sizeof(struct student));
        if (!pNew) return NULL;
        scanf("%s", pNew->name);
        scanf("%d", &pNew->iNumber);

        if (pNew->iNumber != 0) {
            pNew->pNext = NULL;
            pEnd->pNext = pNew;
            pEnd = pNew;
        }
    }

    return pHead;
}
void Print(struct student* pHead) {
    struct student* pTemp = pHead;
    int index = 1;
    printf("共%d学生的信息\n", count);
    while (pTemp != NULL) {

        printf("第%d学生的信息\n", index);
        printf("%s,%d\n", pTemp->name, pTemp->iNumber);
        pTemp = pTemp->pNext;
        index++;
    }
}
struct student* Delete(struct student* PHead) {
    struct student* pTemp = PHead;
    PHead = PHead->pNext;
    free(pTemp);
    printf("-----删除之后的效果-----\n");
    count--;
    return PHead;
}

struct student* DeletePosition(struct student* pHead,int index) {
    int i;
    struct student* pTemp = pHead;
    struct student* pPre = pTemp;
    if(index == 1) {
        return Delete(pHead);
    }
    for(i = 1; i < index; i++) {
        pPre = pTemp;
        pTemp = pTemp->pNext;
    }
    pPre->pNext = pTemp->pNext;
    free(pTemp);
    printf("-----删除之后的效果-----\n");
    count--;
    return pHead;
}

struct student* Insert(void) {
    struct student* pNew,*pHead = NULL;
    pNew = (struct student*)malloc(sizeof(struct student));
    if(!pNew) return NULL;
    scanf("%s",pNew->name);
    scanf("%d",&pNew->iNumber);
    pNew->pNext = pHead;
    pHead = pNew;
    count++;
    return pHead;
}

int main() {
    struct student* pHead = Create();
    Print(pHead);
    //删除第一个信息
    //pHead = Delete(pHead);
    //删除指定位置的信息
    //pHead = DeletePosition(pHead, 1);
    //插入
    pHead = Insert();
    Print(pHead);
    return 0;
}
