#include<stdio.h>
#define KERWIN 2
int main() {
#if KERWIN==1
	printf("两驱舒适的车机代码");

#elif KERWIN==2
	printf("两驱都市的车机代码");

#elif KERWIN==3
	printf("两驱风尚的车机代码");
#else 
	printf("两驱爵士的车机代码");

#endif
}
