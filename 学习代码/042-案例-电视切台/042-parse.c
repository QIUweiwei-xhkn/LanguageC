#include<stdio.h>
#include"042-show.h"
static int parseChannel;
int parseVideo();
int parseAudio();
void parse(int channel) {
	printf("开始 %d 频道解析\n",channel);
	parseChannel = channel;
	int videodata = parseVideo();
	int audiodata = parseAudio();


	//显示界面
	show(videodata,audiodata);
}


static int parseVideo() {
	printf("开始 %d 频道 视频  解析\n", parseChannel);
	return 1000;
}

static int parseAudio() {
	printf("开始 %d 频道 音频  解析\n", parseChannel);
	return 2000;
}