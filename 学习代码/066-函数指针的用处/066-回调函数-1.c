#include<stdio.h>
void aaaaaaaa(int* videodata);
//��ĺ���-----����
void gstreamerParVideo(int *originVideoData, 
	void (*p)(int *videodata)) {
	//��������
	for (int i = 0; i < 3; i++) {
		originVideoData[i] += 100;
	}

	//�ص����Ǵ���ĺ���
	p(originVideoData);

}
//�Լ���װ�ĺ���
void parseVideo(int *video) {
	//����gstreamer�����

	gstreamerParVideo(video, aaaaaaaa);
}
//�Լ���װһ���ص�������

void aaaaaaaa(int *videodata) {
	for (int i = 0; i < 3; i++) {
		printf("%d\n",videodata[i]);
	}
	//��������

	//�͵���һ���ܵ���������
}

int main() {
	int arr[] = { 11,22,33 };
	parseVideo(arr);
	

}