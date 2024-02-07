#include <stdio.h>

int main() {
    int k;
    scanf("%d", &k);

    for (int t = 1; t <= k; t++) {
        int n;
        scanf("%d", &n);

        int mmr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &mmr[i]);
        }

        int f;
        scanf("%d", &f);

        int i, j;
        int notInside = 1;

        for (i = 0; i < n; i++) {
            if (f == mmr[i]) {
                notInside = 0;
                break;
            }
        }

        int max = 0;
        int min = 10000;
        int indexMax = -1;
        int indexMin = -1;

        for (int i = 0; i < n; i++) {
            if (mmr[i] > f && mmr[i] < min) {
                min = mmr[i];
                indexMin = i;
            }
            if (mmr[i] < f && mmr[i] > max) {
                max = mmr[i];
                indexMax = i;
            }
        }

        printf("CASE #%d: ", t);

        if (notInside == 1) {
            printf("-1 -1\n");
        } else if (indexMin == -1) {
            printf("%d %d\n", mmr[indexMax], f);
        } else {
            printf("%d %d\n", f, mmr[indexMin]);
        }
    }

    return 0;
}
