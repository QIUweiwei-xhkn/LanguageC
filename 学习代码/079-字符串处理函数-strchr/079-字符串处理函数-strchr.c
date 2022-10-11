#include<stdio.h>
#include<string.h>
int main() {
	//char* str = "kereweien";

	///*char* res = strchr(str, 'e');*/

	//char* res = strrchr(str, 'n');//末次匹配 
	//if (res == NULL) {
	//	printf("不在");
	//	return;
	//}
	//printf("%p\n", str);

	//printf("%p\n", res);

	//printf("%d\n", (int)(res - str));

	char* str[] = { "tiechui","kerwin","xiaoming" };

	char search = 0;

	printf("请输入你要模糊查询的字符\n");

	scanf_s("%c", &search, 1);

	for (int i = 0; i < sizeof(str) / sizeof(char*); i++) {
		if (strchr(str[i], search) != NULL) {
			printf("%s\n", str[i]);
		}
	}
}  