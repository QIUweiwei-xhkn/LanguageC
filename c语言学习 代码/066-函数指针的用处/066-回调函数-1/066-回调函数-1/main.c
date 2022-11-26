#include <stdio.h>
void aaaaaaaa(int* videodata);
void gstreamerParVideo(int *originVideoData,void (*p)(int *Videodata)) {
    for(int i = 0; i < 3; i++) {
        originVideoData[i] += 100;
    }
    p(originVideoData);
}

void parseVideo(int *video) {
    gstreamerParVideo(video, aaaaaaaa);
}

void aaaaaaaa(int *videodata) {
    for(int i = 0; i < 3; i++) {
        printf("%d\n",videodata[i]);
    }
}

int main() {
    int arr[] = {11,22,33};
    parseVideo(arr);
}
