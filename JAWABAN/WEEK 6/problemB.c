#include <stdio.h>

void CAKTELO(int BARUSADARININOMOR[], int BAMBANG, int n, int menyerah) {
    if (BAMBANG >= n) {
        return;
    }
    int kiri = 2 * BAMBANG + 1;
    int kanan = 2 * BAMBANG + 2;
    int sekarang = menyerah + BARUSADARININOMOR[BAMBANG];

    if (kiri >= n && kanan >= n) {
        printf("%d\n", sekarang);
        return;
    }
    //kiri daun
    CAKTELO(BARUSADARININOMOR, kiri, n, sekarang);

    //kanan daun
    CAKTELO(BARUSADARININOMOR, kanan, n, sekarang);
}
// Stanley Pratama Teguh
int main() {
    int T,j;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        int n;
        scanf("%d", &n);
        int BARUSADARININOMOR[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &BARUSADARININOMOR[j]);
        }
        
        printf("Case #%d:\n", i + 1);
            CAKTELO(BARUSADARININOMOR, j, n, 0);
    }

    return 0;
}
