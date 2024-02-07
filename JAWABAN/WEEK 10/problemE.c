#include <stdio.h>

int main() {
    int T, N, M;
    scanf("%d", &T);

    for (int i = 1; i <= T; ++i) {
        scanf("%d %d", &N, &M);
        int arr[N];

        for (int j = 0; j < N; ++j) {
            scanf("%d", &arr[j]);
        }

        int sum = 0, length = 0, maxLength = 0;

        for (int start = 0, end = 0; end < N; ++end) {
            sum += arr[end];
            ++length;

            while (sum > M && start <= end) {
                sum -= arr[start];
                --length;
                ++start;
            }

            if (length > maxLength) {
                maxLength = length;
            }
        }

        printf("Case #%d: %d\n", i, (maxLength > 0) ? maxLength : -1);
    }

    return 0;
}

