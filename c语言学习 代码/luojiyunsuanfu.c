#include <stdio.h>
int main()
{
        int a = 10;
        int b = 20;
        int c = 30;
        if ((a<b)&&(b<c))//&&为逻辑且
{
        printf("逻辑且条件为真\n");
}
        if ((a>b)||(b<c))//||为逻辑或
{
        printf("逻辑或条件为真\n");
}
        if(!(a>b))//!为逻辑非
{
        printf("逻辑非条件为真\n");
}
        return 0;
}
