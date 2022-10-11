#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	char name[100];
	int score;
}STU;

typedef struct
{
	char name[100];
	int salary;
	int iNumber; //�籣���
}TEA;

typedef union {
	STU student;
	TEA teacher;
}ANY;

enum TYPE {STUDENT=1,TEACHER} mytype;

void save1(STU* student) {
	//���ļ��ɹ��� ��ӡһ��

	printf("save-student-%s-%d", student->name, student->score);
}

void save2(TEA* teacher) {
	printf("save-teacher-%s-%d-%d", teacher->name, teacher->salary, teacher->iNumber);
}

void save(ANY* anydata, int type) {
	if (type == STUDENT) {
		printf("save-student-%s-%d", anydata->student.name, anydata->student.score);
	}
	else {
		printf("save-teacher-%s-%d-%d", anydata->teacher.name, anydata->teacher.salary, anydata->teacher.iNumber);

	}
}

int main() {

	
	printf("������Ҫ¼�����ѧ����������ʦ����Ϣ�� ѧ������1����ʦ����2\n");

	int type = 0;
	scanf_s("%d", &type);

	if (type == STUDENT) {
		//���� ��ѧ���� �ڴ�

		ANY* any = (ANY*)malloc(sizeof(ANY));
		if (!any) return;
		scanf_s("%s%d", any->student.name, 100, &any->student.score);

		//save1(student);

		save(any, type);
	}
	else if(type==TEACHER) {
		//���� ����ʦ���ڴ�
		ANY* any = (ANY*)malloc(sizeof(ANY));
		if (!any) return;
		scanf_s("%s%d%d", any->teacher.name, 100, &any->teacher.salary, &any->teacher.iNumber);
		//save2(teacher);

		save(any, type);
	}
	else {
		printf("��������\n");
	}
}