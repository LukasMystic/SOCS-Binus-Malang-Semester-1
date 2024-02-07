#include <stdio.h>

long long int BABAH(int n, long long int* AKUCAPEK) {
    (*AKUCAPEK)++; 
    if (n <= 1) {
        return n;
    }
    return BABAH(n - 1, AKUCAPEK) + BABAH(n - 2, AKUCAPEK);
}

int main() {
    int T;
    scanf("%d", &T);

    for (int jumlah = 1; jumlah <= T; jumlah++) {// Stanley PT
        int n;
        scanf("%d", &n);
        long long int AKUCAPEK = 0;  
        long long int result = BABAH(n, &AKUCAPEK);
        printf("Case #%d: %lld\n", jumlah, AKUCAPEK);
    }

    return 0;
}
