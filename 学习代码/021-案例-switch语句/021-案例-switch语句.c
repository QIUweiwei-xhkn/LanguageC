#include<stdio.h>

int main() {
	//��͸
    /*int month = 4;
    switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31��");
        break;
    case 2:
        printf("28��");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30��");
        break;
    default:
        printf("����");
    }*/

    int score = 0;
    printf("������ɼ�0-100��\n");
    scanf_s("%d", &score);

    int flag = score / 10;

    //printf("%d", flag);

    switch (flag) {
    case 10:
    case 9:
        printf("A");
        break;
    case 8:
        printf("B");
        break;
    case 7:
        printf("C");
        break;
    case 6:
        printf("D");
        break;
    default:
        printf("E");
        break;
    }
}