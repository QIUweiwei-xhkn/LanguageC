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

void saveInfo(char *filename,struct Node *headNode) {
	//打开文件
	FILE* fp = fopen(filename, "w");
	//写入文件 fwrite , fprintf

	struct Node* move = headNode->next;
	while (move != NULL) {
		fprintf(fp, "%s %.1f %d\n", move->data.name, move->data.price, move->data.num);

		move = move->next;
	}

	//关闭文件
	fclose(fp);
}

void keyEvent() {
	int key = 0;
	scanf("%d", &key);
	struct bookInfo temp;
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
	menu();
	keyEvent();
}