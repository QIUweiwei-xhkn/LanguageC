#include<stdio.h>
void kerwin_scanf(int add) {
	printf("%p", add);
}
int main() {
	//char a[][100]
	char name[7];
	printf("�����������������\n");
	scanf_s("%s", name,7);//��ȫ

	printf("%p\n", name);
	printf("%p\n", &name);
	//int a;
	//scanf_s("%d", &a);
	//printf("%d\n", a);

	kerwin_scanf(&name);
	//printf("%p\n", &a);// %p ��ַ
}

