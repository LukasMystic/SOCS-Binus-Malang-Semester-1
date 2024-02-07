#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int T, N, i, j;
    scanf("%d", &T); 

    for(i = 0; i < T; i++) {
        scanf("%d", &N); 

        int numbers[N];
        for(j = 0; j < N; j++) {
            scanf("%d", &numbers[j]); 
        }

        int result = numbers[0];
        for(j = 1; j < N; j++) {
            result = gcd(numbers[j], result);

            if(result == 1) {
               break;
            }
        }

        printf("Case #%d: %d\n", i+1, result); 
    }

    return 0;
}

