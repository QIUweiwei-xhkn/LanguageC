#include<stdio.h>
#include<string.h>
int main() {
	printf("注册密码：");
	char password[7] = "";
	scanf_s("%s", password, 7);

	/*printf("*%s*", password);*/

	FILE* fp;
	int error = fopen_s(&fp, "kerwin.txt", "w+");
	if (error != 0) {
		return;
	}

	fputs(password, fp);

	int length = ftell(fp);

	//printf("%d", length);
	if (length == 6) {
		printf("注册成功\n");
	}
	else {
		printf("注册失败\n");
		return;
	}


	printf("登录密码：");

	scanf_s("%s", password, 7);

	//从文件（数据库）中取数据

	char password_db[7] = "";

	//rewind(fp);

	//fseek(fp, 0, SEEK_SET); //从开头位置，便宜0个字节。

	//fseek(fp, -6 , SEEK_CUR);

	//fseek(fp, -5, SEEK_CUR);

	fseek(fp, -6, SEEK_END);

	fgets(password_db, 7, fp);


	//printf("%s", password_db);

	//判断password_db ，password

	// strcmp 比较函数 返回0

	int result = strcmp(password, password_db);

	if (result == 0) {
		printf("登录成功");
	}
	else {
		printf("登录失败%d", result);
	}
}