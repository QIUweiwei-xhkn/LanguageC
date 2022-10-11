#include<stdio.h>
#include<stdlib.h>

char* func(num) {
	char* p = (char*)malloc(num);
	return p;
}

int main() {
	//char* p;
	//p = (char*)malloc(100);
	//
	//free(p);
	////接下来，可以用 p 指向的内存了
	//p = "kerwin";//p 指向别的地方了

	char *x = func(100);

	char *y = func(200);

	//--------------------


	free(x);
	free(y);
}  