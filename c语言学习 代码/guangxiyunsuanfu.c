#include <stdio.h>
int main()
{
	int a = 10;
	int b = 10;
	if(a>b)
{
	printf("%d\n",a);
}
	if(a<b)
{
	printf("%d\n",b);
}
	if(a==b)//注意等于运算符为==
{
	printf("a=b=%d",b);//或将后一个b换成a也可但不能写做，a，b）
}

    return 0;
}
