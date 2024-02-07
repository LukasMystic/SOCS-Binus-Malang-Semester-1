#include <stdio.h>

int main() {
    int N, Q, i, j, sum, M;

    scanf("%d", &N);
    int A[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    scanf("%d", &Q);
    for (i = 1; i <= Q; i++) {
        scanf("%d", &M);

        int maxLength = -1;
        sum = 0;
        j = 0;

        for (int k = 0; k < N; k++) {
            sum += A[k];

            while (sum > M && j < k) {
                sum -= A[j];
                j++;
            }

            int currentLength = k - j + 1;
            if (sum <= M && currentLength > maxLength) {
                maxLength = currentLength;
            }
        }

        printf("Case #%d: %d\n", i, maxLength);
    }

    return 0;
}

