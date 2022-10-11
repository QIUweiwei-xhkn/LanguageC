#include<stdio.h>

int main() {
	//sscanf_s

	/*char* address = "辽宁 大连 高新";
	char str[3][100];
	sscanf_s(address, "%s %s %s", str[0],100, str[1],100, str[2],100);
	printf("%s\n", str[1]);*/

	char* address = "辽宁|大连|高新";
	char str[3][100];
	sscanf_s(address, "%[^|]|%[^|]|%[^|]", str[0], 100, str[1], 100, str[2], 100);
	printf("%s\n", str[1]);
}