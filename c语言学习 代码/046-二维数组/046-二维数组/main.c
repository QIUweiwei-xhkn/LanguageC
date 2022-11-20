#include <stdio.h>
int main() {
//    int grades[3][3] = {
//        {98,99,100},
//        {100,99,98},
//        {88,87,78}
//    };
    char grades2[][3] = {
        {98,99,100},
        {100,99},
        {88,87,78}
    };
    printf("%d\n",grades2[1][2]);
    for (int i = 0;i < sizeof(grades2) / (sizeof(char)*3) ;i++) {
        printf("第%d行\n",i);
        for (int j = 0;j < 3;j++) {
            printf("%d  ",grades2[i][j]);
        }printf("\n");
    }
    
//    char str[] = "kerwin";
    char str[][100] = {"kerwin","xiaoming","teichui","诸葛山珍"};
    for(int x = 0;x < sizeof(str)/(sizeof(char)*100);x++) {
            printf("%s\n",str[x]);
    }
    printf("%d\n",str[0][5]);
    
    
    int school[2][2][2] ={
        {
            {100,99},
            {98,200}
        },
        {
            {97,98},
            {96,89}
        }
    };
    
    printf("%d\n",school[0][1][1]);
   
}
