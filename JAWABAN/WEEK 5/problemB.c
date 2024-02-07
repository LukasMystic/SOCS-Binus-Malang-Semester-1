#include <stdio.h>

int main() {
    int kasus, i, j, k;
    scanf("%d", &kasus);

    for (i = 1; i <= kasus; i++) {
        int kotak;
        scanf("%d", &kotak);

        int matriks[kotak][kotak];
        int hasil[kotak];

        for (j = 0; j < kotak; j++) {
            hasil[k] = 0;
        }

        for (j = 0; j < kotak; j++) {//row(baris)
            for (k = 0; k < kotak; k++) {//kolom
                scanf("%d", &matriks[j][k]); 
                hasil[k] += matriks[j][k];  
            }
        }

        printf("Case #%d:", i);
        int f;
        for (f = 0; f < kotak; f++) {
            printf(" %d", hasil[f]);
        }
        printf("\n");
    }
    return 0;
}
