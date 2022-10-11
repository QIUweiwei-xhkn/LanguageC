#include<stdio.h>
void aaaaaaaa(int* videodata);
//库的函数-----解耦
void gstreamerParVideo(int *originVideoData, 
	void (*p)(int *videodata)) {
	//处理数据
	for (int i = 0; i < 3; i++) {
		originVideoData[i] += 100;
	}

	//回调我们传入的函数
	p(originVideoData);

}
//自己封装的函数
void parseVideo(int *video) {
	//引入gstreamer库解析

	gstreamerParVideo(video, aaaaaaaa);
}
//自己封装一个回调函数，

void aaaaaaaa(int *videodata) {
	for (int i = 0; i < 3; i++) {
		printf("%d\n",videodata[i]);
	}
	//播放器，

	//送到下一机管道。。。。
}

int main() {
	int arr[] = { 11,22,33 };
	parseVideo(arr);
	

}