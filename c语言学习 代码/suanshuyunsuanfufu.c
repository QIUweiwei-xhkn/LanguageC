#include <stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 0;
 	c = a + b;
	printf("c=%d\n",c);
	c = 10 % 3;//相当于c=10除以3的余数
	printf("c=%d\n",c);
	a +=3;//相当于a=a+3
	printf("a=%d\n",a);
	b += 2*8;//相当于b=b+(2*8)
	printf("b=%d",b);
	return 0;
}

