#include<stdio.h>
#include"042-parse.h"
static int globalChannel;

void acceptControll() {

	do {
		int channel = 0;
		printf("������ң�����л���Ƶ��\n");
		scanf_s("%d", &channel);
		if (globalChannel !=channel) {
			globalChannel = channel;
			printf("��̨%dƵ��\n", channel);

			parse(channel);
		}
		
	} while (1);
}