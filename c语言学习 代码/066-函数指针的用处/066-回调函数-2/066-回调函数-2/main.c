#include <stdio.h>
void myshow(int a, int b) {
    printf("压缩进度%d----%d\n",a,b);
}

void compress(char* file_name,void(*cb)(int,int)) {
    printf("%s\n",file_name);
    printf("开始压缩数据\n");
    printf("开始更新压缩进度\n");
    cb(50,120);
}
int main() {
    compress("kerwin.jpg",myshow);
    return 0;
}
