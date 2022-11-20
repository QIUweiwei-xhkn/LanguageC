#include <stdio.h>
#include "042-parse.h"
static int globalChannel;
void acceptControll() {
    do {
        int channel = 0;
        printf("请输入遥控器切换的频道\n");
        scanf("%d",&channel);
        if (globalChannel !=channel) {
            globalChannel = channel;
            printf("切台%d频道\n",channel);
            parse(channel);
        }
    }while (1);
}
