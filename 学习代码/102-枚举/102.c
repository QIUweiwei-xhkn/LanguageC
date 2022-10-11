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
	int iNumber; //社保编号
}TEA;

typedef union {
	STU student;
	TEA teacher;
}ANY;

enum TYPE {STUDENT=1,TEACHER} mytype;

void save1(STU* student) {
	//存文件成功， 打印一下

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

	
	printf("请输入要录入的是学生，还是老师的信息， 学生输入1，老师输入2\n");

	int type = 0;
	scanf_s("%d", &type);

	if (type == STUDENT) {
		//申请 存学生的 内存

		ANY* any = (ANY*)malloc(sizeof(ANY));
		if (!any) return;
		scanf_s("%s%d", any->student.name, 100, &any->student.score);

		//save1(student);

		save(any, type);
	}
	else if(type==TEACHER) {
		//申请 存老师的内存
		ANY* any = (ANY*)malloc(sizeof(ANY));
		if (!any) return;
		scanf_s("%s%d%d", any->teacher.name, 100, &any->teacher.salary, &any->teacher.iNumber);
		//save2(teacher);

		save(any, type);
	}
	else {
		printf("输入有误\n");
	}
}