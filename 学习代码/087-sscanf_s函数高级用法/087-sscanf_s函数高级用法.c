#include<stdio.h>

int main() {
	/*char* address = "辽宁 大连 高新";
	char str[3][100];
	sscanf_s(address, "%s %s %s", str[0], 100, str[1], 100, str[2], 100);
	printf("%s\n", str[1]);*/

	/*
	  1. 跳过数据 %*s %*d
	  2. 指定宽度 %8s
	  3. 集合操作 %[a-z] %[abc] %[^abc]
	*/
	/*char* address = "辽宁 大连 高新园区达瓦达瓦";
	char str[2][100];
	sscanf_s(address, "%*s %s %8s", str[0], 100, str[1], 100);
	printf("%s\n", str[1]);*/


	//char* str = "2000 pker winkerw";

	//char buf[100];

	////sscanf_s(str, "%[a-z]", buf, 100);
	////sscanf_s(str, "%[wikren ]", buf, 100);
	//sscanf_s(str, "%[^wikren]", buf, 100);
	//printf("%s", buf);


	char* address = "辽宁&大连&高新";
	char str[3][100];
	sscanf_s(address, "%[^&]&%[^&]&%[^&]", str[0], 100, str[1], 100, str[2], 100);
	printf("%s\n", str[2]);


	char* email = "kerwin@163.com";
	char buf[100];
	
	sscanf_s(email, "%[^@]", buf, 100);

	printf("%s", buf);
}