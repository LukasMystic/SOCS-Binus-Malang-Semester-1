#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N, X;
        scanf("%d %d", &N, &X);

        int carriages[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &carriages[i]);
        }

        int totalTime = 0;
        for (int i = 0; i < N - 1; i++) {
            for (int j = i + 1; j < N; j++) {
                if (carriages[j] < carriages[i]) {
                    swap(&carriages[i], &carriages[j]);
                    totalTime += X;
                }
            }
        }

        printf("Case #%d: %d\n", t, totalTime);
    }

    return 0;
}

