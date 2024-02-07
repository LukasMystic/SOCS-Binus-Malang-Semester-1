#include <stdio.h>

int main() {
    int N, opinion, isHard = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; ++i) {
        scanf("%d", &opinion);
        if (opinion == 1) {
            isHard = 1;
            break;
        }
    }

    if (isHard == 1) {
        printf("not easy\n");
    } else {
        printf("easy\n");
    }

    return 0;
}

