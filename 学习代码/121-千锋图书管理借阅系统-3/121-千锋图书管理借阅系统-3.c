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

	//根据 传来的data,创建一个新的Node 结构体，newNode
	struct Node* newNode = createNode(data);
	newNode->next = headNode->next;
	headNode->next = newNode;
}

void readInfo(char* filename, struct Node* headNode) {
	//fscanf 返回EOF;
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
	//打开文件
	FILE* fp = fopen(filename, "w");
	//写入文件 fwrite , fprintf
	if (fp == NULL) {
		return;
	}
	struct Node* move = headNode->next;
	while (move != NULL) {
		fprintf(fp, "%s %.1f %d\n", move->data.name, move->data.price, move->data.num);

		move = move->next;
	}

	//关闭文件
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
	
		printf("删除成功");
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
		printf(" [录入] \n");
		printf(" 录入的书籍信息，名字，价格，数量\n");
		scanf("%s%f%d",temp.name,&temp.price,&temp.num);
		//printf("%s,%.1f,%d", temp.name, temp.price, temp.num);

		// 同步到链表
		insertBook(list,temp);
		// 同步文件
		saveInfo("kerwin.txt", list);
		break;
	case 1:
		printf(" [速览] \n");
		showlist(list);
		break;
	case 2:
		printf(" [借阅] \n");
		printf(" 查询的书名是：\n");
		scanf("%s", temp.name);

		result = searchByName(list, temp.name);
		if (result == NULL) {
			printf("未找到相关书籍，无法借阅\n");

		}
		else {
			//
			if (result->data.num > 0) {
				result->data.num--;
				printf("借阅成功\n");
				saveInfo("kerwin.txt", list);
			}
			else {
			
				printf("没有库存，无法借阅");
			}
		}
		break;
	case 3:
		printf(" [归还] \n");
		printf(" 查询的书名是：\n");
		scanf("%s", temp.name);

		result = searchByName(list, temp.name);
		if (result == NULL) {
			printf("未找到相关书籍，无法借阅\n");

		}
		else {
			result->data.num++;
			printf("归还成功\n");
			saveInfo("kerwin.txt", list);
		}
		break;
	case 4:
		printf(" [查找] \n");
		printf(" 查询的书名是：\n");
		scanf("%s", temp.name);

		result = searchByName(list, temp.name);
		if (result == NULL) {
			printf("未找到相关书籍\n");

		}
		else {
			printf("书名 价格 数量\n");
			printf("%s %.1f %d\n", result->data.name, result->data.price, result->data.num);

		}
		break;
	case 5:
		printf(" [删除] \n");
		printf(" 删除的书名是：\n");
		scanf("%s", temp.name);
		deleteByName(list,temp.name);
		saveInfo("kerwin.txt",list);
		break;
	case 6:
		printf(" [退出] \n");
		exit(0);//ctrl+c;
		break;
	default:
		break;
	}
}
void menu() {

	printf("----------------------------------\n");
	printf("千锋图书管理借阅系统\n");
	printf("0.录入书籍\n");
	printf("1.速览书籍\n");
	printf("2.借阅书籍\n");
	printf("3.归还书籍\n");
	printf("4.查找书籍\n");
	printf("5.删除书籍\n");
	printf("6.退出系统\n");
	printf("----------------------------------\n");
	printf("请输入(0~6):");

}
int main() {
	//初始化头部指针。
	list = createHead();
	// 读取原来文件的数据.
	readInfo("kerwin.txt", list);
	while (1) {
		menu();
		keyEvent();

		system("pause");
		system("cls");
	}
}