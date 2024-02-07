#include <stdio.h>
int HitungF(int N, int *Turu, int *fhitung){
    if (N == 0) // f(0)
        return 1;
    if (N == 1) // f(1)
        return 2;
    if (N % 5 == 0 && N % 3 == 0){// utk nilai perkalian 3 tp 5
        (*fhitung)++;
        return N * 2;
    }
    if (N % 5 == 0){ // perkalian 5
        *Turu += 1;
        return N * 2;
    }
    if (N % 3 == 0){ // perkalian 3
        (*fhitung)++;
    }
    return HitungF(N - 1, Turu, fhitung) + N + HitungF(N - 2, Turu, fhitung) + N - 2; // rumus
}

int main() {
    int T;
    scanf("%d", &T);
    
    int inputs[T]; //Babah array
    
    for (int jumlah = 0; jumlah < T; jumlah++) { // Stanley PT
        int N;
        scanf("%d", &N);
        inputs[jumlah] = N; // ARRAY
    }
    
    for (int jumlah = 0; jumlah < T; jumlah++) {
        int Turu = 0;
        int fhitung = 0;
        int hasil = HitungF(inputs[jumlah], &Turu, &fhitung);
        printf("Case #%d: %d %d\n", jumlah + 1, hasil, fhitung);
    }
    return 0;
}
