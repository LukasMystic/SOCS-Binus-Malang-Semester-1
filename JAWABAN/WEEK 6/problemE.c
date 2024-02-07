#include <stdio.h>

int insomnia(int K, int a, int b) {
    if (K == 0) {
        return a;
    } else if (K == 1) {
        return b;
    } else {
        return insomnia(K - 1, a, b) + insomnia(K - 2, a, b);
    }
}

int main() {
    int NamaIniLagi, NamaIniLagi2, K;
    scanf("%d %d", &NamaIniLagi, &NamaIniLagi2);
    scanf("%d", &K);//Stanley Pratama Teguh

    int result = insomnia(K, NamaIniLagi, NamaIniLagi2);
    printf("%d\n", result);

    return 0;
}
