#include <stdio.h>

int main() {
    int kasus;
    int i,j,k,l;
    scanf("%d", &kasus);

    int total[kasus][100]; 
    int panjang[kasus]; 

    for (i = 0;i < kasus; i++) {
        int a;
        scanf("%d", &a);
        panjang[i] = a;

        int atas[a], bawah[a];

        for ( j = 0; j < a; j++) {
            scanf("%d", &atas[j]);
        }

        for (j = 0; j < a; j++) {
            scanf("%d", &bawah[j]);
        }

        for (j = 0; j < a; j++) {
            total[i][j] = atas[j] - bawah[j];
        }
    }

    for (i= 0; i< kasus; i++) {
        printf("Case #%d:", i + 1);
        for ( j = 0; j < panjang[i]; j++) {
                printf(" %d", total[i][j]);
            
        }
        printf("\n");
    }

 return 0;
}
