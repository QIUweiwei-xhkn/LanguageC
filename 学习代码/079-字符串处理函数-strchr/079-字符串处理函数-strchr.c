#include<stdio.h>
#include<string.h>
int main() {
	//char* str = "kereweien";

	///*char* res = strchr(str, 'e');*/

	//char* res = strrchr(str, 'n');//ĩ��ƥ�� 
	//if (res == NULL) {
	//	printf("����");
	//	return;
	//}
	//printf("%p\n", str);

	//printf("%p\n", res);

	//printf("%d\n", (int)(res - str));

	char* str[] = { "tiechui","kerwin","xiaoming" };

	char search = 0;

	printf("��������Ҫģ����ѯ���ַ�\n");

	scanf_s("%c", &search, 1);

	for (int i = 0; i < sizeof(str) / sizeof(char*); i++) {
		if (strchr(str[i], search) != NULL) {
			printf("%s\n", str[i]);
		}
	}
}  