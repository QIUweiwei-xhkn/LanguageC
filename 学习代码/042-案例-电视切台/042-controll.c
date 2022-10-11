#include<stdio.h>
#include"042-parse.h"
static int globalChannel;

void acceptControll() {

	do {
		int channel = 0;
		printf("«Î ‰»Î“£øÿ∆˜«–ªªµ√∆µµ¿\n");
		scanf_s("%d", &channel);
		if (globalChannel !=channel) {
			globalChannel = channel;
			printf("«–Ã®%d∆µµ¿\n", channel);

			parse(channel);
		}
		
	} while (1);
}