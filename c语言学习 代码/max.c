#include <stdio.h>

int max(int x, int y)
{
    int z;
    if (x > y) {
        z = x;
    } else {
        z = y;
    }
    // 测试
    return z;
}

int main()
{
	int a,b,c;
	scanf("%d", &a);
    scanf("%d", &b);
    c = max(a, b);
	printf("max=%d\n", c);
	return 0;
}
