#include<stdio.h>
#include<string.h>
int main() {
	printf("ע�����룺");
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
		printf("ע��ɹ�\n");
	}
	else {
		printf("ע��ʧ��\n");
		return;
	}


	printf("��¼���룺");

	scanf_s("%s", password, 7);

	//���ļ������ݿ⣩��ȡ����

	char password_db[7] = "";

	//rewind(fp);

	//fseek(fp, 0, SEEK_SET); //�ӿ�ͷλ�ã�����0���ֽڡ�

	//fseek(fp, -6 , SEEK_CUR);

	//fseek(fp, -5, SEEK_CUR);

	fseek(fp, -6, SEEK_END);

	fgets(password_db, 7, fp);


	//printf("%s", password_db);

	//�ж�password_db ��password

	// strcmp �ȽϺ��� ����0

	int result = strcmp(password, password_db);

	if (result == 0) {
		printf("��¼�ɹ�");
	}
	else {
		printf("��¼ʧ��%d", result);
	}
}