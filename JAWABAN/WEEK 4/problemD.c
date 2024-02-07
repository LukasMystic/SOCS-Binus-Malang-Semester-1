#include <stdio.h>
int main() {
    int T,i;
    scanf("%d", &T);

    int A[1001], B[1001]; 

    for (i = 1; i <= T; i++) {
        scanf("%d %d", &A[i], &B[i]);
    }

    for (i = 1; i <= T; i++) {
        int total = 0;
        int kosong = A[i]; // Stanley Pratama Teguh

        while (kosong >= B[i]) {
            int gelas = kosong / B[i];
            total += gelas;
            kosong = gelas + (kosong % B[i]);
        }

        total += A[i];
        printf("Case #%d: %d\n", i, total);
    }

    return 0;
}
