#include <stdio.h>

int main() {
    int x, y, k;//Stanley Pratama Teguh
    scanf("%d %d %d", &x, &y, &k);

    int t = -1; // Inisialisasi t dengan nilai -1, ini akan menjadi output jika tidak ada waktu yang memenuhi


    for (int i = 0; i <= 100; i++) {
        int lantai_lift_pertama = x + i;
        int lantai_lift_kedua = y - i;

        if (lantai_lift_pertama == k && lantai_lift_kedua == k) {
            t = i;
            break; 
        }
    }

    printf("%d\n", t);
    return 0;
}

