#include<stdio.h>
#include"042-show.h"
static int parseChannel;
int parseVideo();
int parseAudio();
void parse(int channel) {
	printf("��ʼ %d Ƶ������\n",channel);
	parseChannel = channel;
	int videodata = parseVideo();
	int audiodata = parseAudio();


	//��ʾ����
	show(videodata,audiodata);
}


static int parseVideo() {
	printf("��ʼ %d Ƶ�� ��Ƶ  ����\n", parseChannel);
	return 1000;
}

static int parseAudio() {
	printf("��ʼ %d Ƶ�� ��Ƶ  ����\n", parseChannel);
	return 2000;
}