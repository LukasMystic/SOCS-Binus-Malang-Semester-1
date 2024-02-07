#include <stdio.h>
int main() {
    int N,i,b,hasil;
    scanf("%d", &N);

    int hitung = 0;

    for (i = 0; i <= N; i++) { // loop pertama (akan loop jika loop kedua tidak loop)
        for (b = 0; b <= N; b++) { // loop kedua
            hasil = N - i - b;
            if (hasil >= 0) {// Stanley Pratama Teguh
                hitung++;
            }
        }
    }

    printf("%d\n", hitung);

    return 0;
}
