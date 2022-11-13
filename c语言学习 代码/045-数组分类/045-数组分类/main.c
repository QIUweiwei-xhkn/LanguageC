#include <stdio.h>
int main() {
    char str[5] = {1,2,3,4,127};
    unsigned char str2[] = {-100,'A'};
    /*for (int i = 0; i < sizeof(str2); i ++) {
     printf("%d\n",str2[i]);
     }*/
    int a[5] = {'A','B',1.1f};
    float b[5] ={1.1f,2.2f,3.3f,1};
    /*for (int i = 0; i < 5 ; i ++) {
     printf("%f\n",b[i]);
     }*/
    char name1[] = "kerwin";
    char name2[] = {'k','e','r','w','i','n','\0'};
    char name3[7] = "kerwin";
    printf("%s\n",name1);
    printf("%s\n",name2);
    printf("%s\n",name3);
    /*printf("%d\n",sizeof(name1));
    printf("%d\n",sizeof(name2));
    printf("%d\n",sizeof(name3));*/
    for (int i = 0; i < sizeof(name3)/sizeof(char); i ++) {
        printf("%c\n",name3);
    }
}
