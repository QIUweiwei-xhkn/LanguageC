#include<stdio.h>
#define KERWIN 1 //¿ª¹Ø

int main() {
	//int x= 1
#ifdef KERWIN
	printf("kerwin-111111111111");
#else
	printf("kerwin-2222222222222");
#endif // KERWIN

	//int x = 1;
	//if (x) {
	//	printf("kerwin-333333333");
	//}
	//else {
	//	printf("kerwin-44444444444");
	//}
}
