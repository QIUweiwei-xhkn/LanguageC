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
	while (pTemp != NULL) {

		printf("��%dѧ������Ϣ\n", index);
		printf("%s,%d\n", pTemp->name, pTemp->iNumber);
		pTemp = pTemp->pNext;
		index++;
	}
}

struct student* Delete(struct student* pHead) {
	struct student* pTemp = pHead;
	pHead = pHead->pNext;
	free(pTemp);
	printf("-----ɾ��֮���Ч��------\n");
	count--;
	return pHead;
}

struct student* DeletePosition(struct student* pHead,int index) {
	
	struct student* pTemp = pHead;
	struct student* pPre = pHead;

	if (index == 1) {
		return Delete(pHead);
	}

	for (int i = 1; i < index; i++) {
		pPre = pTemp;
		pTemp = pTemp->pNext;
	}

	//i?
	pPre->pNext = pTemp->pNext;
	free(pTemp);
	printf("-----ɾ��֮���Ч��------\n");
	count--;
	return pHead;
}


struct student* Insert(struct student* pHead) {
	struct student * pNew;
	pNew = (struct student*)malloc(sizeof(struct student));
	if (!pNew) return NULL;
	scanf_s("%s", pNew->name, 100);
	scanf_s("%d", &pNew->iNumber);


	pNew->pNext = pHead;

	pHead = pNew;

	count++;

	return pHead;
}

int main() {
	struct student* pHead = Create();

	Print(pHead);

	//ɾ����һ����Ϣ
	//pHead = Delete(pHead);
	//ɾ��ָ��λ�õ���Ϣ
	//pHead = DeletePosition(pHead, 1);

	//����
	pHead = Insert(pHead);
	Print(pHead);
}