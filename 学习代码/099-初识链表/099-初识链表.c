#include<stdio.h>
#include<stdlib.h>

struct student {

	char name[100];//����
	int iNumber;//ѧ��
	struct student* pNext;
};

int count = 0;

struct student* Create() {

	struct student* pHead = NULL;
	struct student* pEnd, * pNew;


	pEnd = pNew = (struct student*)malloc(sizeof(struct student));
	if (!pNew) return NULL;
	printf("���������ֺ�ѧ��,ѧ��Ϊ0,�ȱ�ʾֹͣ¼��\n");
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
	printf("��%dѧ������Ϣ\n", count);
	while (pTemp!=NULL) {
		
		printf("��%dѧ������Ϣ\n", index);
		printf("%s,%d\n", pTemp->name, pTemp->iNumber);
		pTemp = pTemp->pNext;
		index++;
	}
}

int main() {
	struct student* pHead = Create();

	Print(pHead);
}