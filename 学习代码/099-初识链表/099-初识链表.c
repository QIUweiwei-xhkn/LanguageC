#include<stdio.h>
#include<stdlib.h>

struct student {

	char name[100];//姓名
	int iNumber;//学号
	struct student* pNext;
};

int count = 0;

struct student* Create() {

	struct student* pHead = NULL;
	struct student* pEnd, * pNew;


	pEnd = pNew = (struct student*)malloc(sizeof(struct student));
	if (!pNew) return NULL;
	printf("请输入名字和学号,学号为0,既表示停止录入\n");
	scanf_s("%s", pNew->name, 100);
	scanf_s("%d", &pNew->iNumber);

	pNew->pNext = NULL;
	if (pNew->iNumber != 0) {
		pHead = pNew;
	}

	while (pNew->iNumber != 0) {
		count++;
		pNew = (struct student*)malloc(sizeof(struct student));
		if (!pNew) return NULL;
		scanf_s("%s", pNew->name, 100);
		scanf_s("%d", &pNew->iNumber);

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
	while (pTemp!=NULL) {
		
		printf("第%d学生的信息\n", index);
		printf("%s,%d\n", pTemp->name, pTemp->iNumber);
		pTemp = pTemp->pNext;
		index++;
	}
}

int main() {
	struct student* pHead = Create();

	Print(pHead);
}