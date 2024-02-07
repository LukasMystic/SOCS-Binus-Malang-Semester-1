#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

typedef struct {
    char title[1001];
    char artist[1001];
    int views;
} Video;

int compare(const void *a, const void *b) {
    Video *videoA = (Video *)a;
    Video *videoB = (Video *)b;
    if (videoB->views - videoA->views != 0) {
        return videoB->views - videoA->views;
    } else {
        return strcmp(videoA->title, videoB->title);
    }
}

int main() {
    FILE *file = fopen("testdata.in", "r");
    if (file == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    int i = 0;
    Video videos[MAX];

    while (fscanf(file, "%[^#]#%[^#]#%d\n", videos[i].title, videos[i].artist, &videos[i].views) == 3) {
        i++;
    }

    int N = i; 

    qsort(videos, N, sizeof(Video), compare);

    for(i = 0; i < N; i++) {
        printf("%s by %s - %d\n", videos[i].title, videos[i].artist, videos[i].views);
    }

    fclose(file);
    return 0;
}

