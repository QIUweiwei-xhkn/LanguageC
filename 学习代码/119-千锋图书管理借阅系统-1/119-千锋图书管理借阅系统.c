#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
struct bookInfo
{
	char name[100];
	float price;
	int num;
};

struct Node {

	struct bookInfo data;
	struct Node* next;
};

struct Node* list = NULL;


struct Node* createHead() {
	struct Node* headNode = (struct Node *)malloc(sizeof(struct Node));

	if (headNode == NULL) return;
	headNode->next = NULL;

	return headNode;
}
struct Node* createNode(struct bookInfo data) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	if (newNode == NULL) return;

	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}
void insertBook(struct Node *headNode,struct bookInfo data) {

	//���� ������data,����һ���µ�Node �ṹ�壬newNode
	struct Node* newNode = createNode(data);
	newNode->next = headNode->next;
	headNode->next = newNode;
}

void saveInfo(char *filename,struct Node *headNode) {
	//���ļ�
	FILE* fp = fopen(filename, "w");
	//д���ļ� fwrite , fprintf

	struct Node* move = headNode->next;
	while (move != NULL) {
		fprintf(fp, "%s %.1f %d\n", move->data.name, move->data.price, move->data.num);

		move = move->next;
	}

	//�ر��ļ�
	fclose(fp);
}

void keyEvent() {
	int key = 0;
	scanf("%d", &key);
	struct bookInfo temp;
	switch (key)
	{
	case 0:
		printf(" [¼��] \n");
		printf(" ¼����鼮��Ϣ�����֣��۸�����\n");
		scanf("%s%f%d",temp.name,&temp.price,&temp.num);
		//printf("%s,%.1f,%d", temp.name, temp.price, temp.num);

		// ͬ��������
		insertBook(list,temp);
		// ͬ���ļ�
		saveInfo("kerwin.txt", list);
		break;
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		break;
	default:
		break;
	}
}
void menu() {

	printf("----------------------------------\n");
	printf("ǧ��ͼ��������ϵͳ\n");
	printf("0.¼���鼮\n");
	printf("1.�����鼮\n");
	printf("2.�����鼮\n");
	printf("3.�黹�鼮\n");
	printf("4.�����鼮\n");
	printf("5.ɾ���鼮\n");
	printf("6.�˳�ϵͳ\n");
	printf("----------------------------------\n");
	printf("������(0~6):");

}
int main() {
	//��ʼ��ͷ��ָ�롣
	list = createHead();
	// ��ȡԭ���ļ�������.
	readInfo("kerwin.txt", list);
	menu();
	keyEvent();
}