#include<stdio.h>
#include<string.h>

typedef struct address {

	char* province;
	char* city;
	char* district;
}ADDR;

typedef struct student {
	//char name[100];
	char* name;
	int age;
	//char* address[3];

	struct address address;
}STU;
int main() {
	STU student0 = {
		"kerwin",
		100,
		{
			"����",
			"����",
			"����԰��"
		}
	};
	STU student1 = {
		"xiaoming"
	};
	//student1.name = "tiechui";

	//strcpy_s(student1.name, 100, "tiechui");

	student1.name = "tiechui";
	student1.age = 18;
	//student1.address[0] = "ɽ��";
	student1.address.province = "ɽ��";

	printf("%s,%d", student1.name,student1.age);

	printf("%s", student1.address.province);
}