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

void readInfo(char* filename, struct Node* headNode) {
	//fscanf ����EOF;
	FILE* fp = fopen(filename, "r");
	if (fp == NULL) {
		fp = fopen(filename, "w");
		fclose(fp);
		return;
	}
	struct bookInfo temp;
	while (fscanf(fp, "%s %f %d\n",temp.name,&temp.price,&temp.num) != EOF) {
		insertBook(list, temp);
	}


	fclose(fp);
}

void saveInfo(char *filename,struct Node *headNode) {
	//���ļ�
	FILE* fp = fopen(filename, "w");
	//д���ļ� fwrite , fprintf
	if (fp == NULL) {
		return;
	}
	struct Node* move = headNode->next;
	while (move != NULL) {
		fprintf(fp, "%s %.1f %d\n", move->data.name, move->data.price, move->data.num);

		move = move->next;
	}

	//�ر��ļ�
	fclose(fp);
}

void showlist(struct Node* headNode) {
	
	struct Node* move = headNode->next;
	while (move != NULL) {
		printf("%s %.1f %d\n", move->data.name, move->data.price, move->data.num);

		move = move->next;
	}

}

struct Node* searchByName(struct Node *headNode,char *name) {
	struct Node* move = headNode->next;

	while (move != NULL && strcmp(move->data.name,name)) {

		move = move->next;
	}
	return move;
}

void deleteByName(struct Node* headNode, char* name) {

	struct Node* move = headNode->next;
	struct Node* prev = headNode;
	while (move != NULL && strcmp(move->data.name, name)) {
		prev = move;
		move = move->next;
	}

	if (move == NULL) {
		return;
	}
	else {
	
		printf("ɾ���ɹ�");
		prev->next = move->next;
		free(move);
		move = NULL;
	}
}
void keyEvent() {
	int key = 0;
	scanf("%d", &key);
	struct bookInfo temp;
	struct Node* result;
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
		printf(" [����] \n");
		showlist(list);
		break;
	case 2:
		printf(" [����] \n");
		printf(" ��ѯ�������ǣ�\n");
		scanf("%s", temp.name);

		result = searchByName(list, temp.name);
		if (result == NULL) {
			printf("δ�ҵ�����鼮���޷�����\n");

		}
		else {
			//
			if (result->data.num > 0) {
				result->data.num--;
				printf("���ĳɹ�\n");
				saveInfo("kerwin.txt", list);
			}
			else {
			
				printf("û�п�棬�޷�����");
			}
		}
		break;
	case 3:
		printf(" [�黹] \n");
		printf(" ��ѯ�������ǣ�\n");
		scanf("%s", temp.name);

		result = searchByName(list, temp.name);
		if (result == NULL) {
			printf("δ�ҵ�����鼮���޷�����\n");

		}
		else {
			result->data.num++;
			printf("�黹�ɹ�\n");
			saveInfo("kerwin.txt", list);
		}
		break;
	case 4:
		printf(" [����] \n");
		printf(" ��ѯ�������ǣ�\n");
		scanf("%s", temp.name);

		result = searchByName(list, temp.name);
		if (result == NULL) {
			printf("δ�ҵ�����鼮\n");

		}
		else {
			printf("���� �۸� ����\n");
			printf("%s %.1f %d\n", result->data.name, result->data.price, result->data.num);

		}
		break;
	case 5:
		printf(" [ɾ��] \n");
		printf(" ɾ���������ǣ�\n");
		scanf("%s", temp.name);
		deleteByName(list,temp.name);
		saveInfo("kerwin.txt",list);
		break;
	case 6:
		printf(" [�˳�] \n");
		exit(0);//ctrl+c;
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
	while (1) {
		menu();
		keyEvent();

		system("pause");
		system("cls");
	}
}