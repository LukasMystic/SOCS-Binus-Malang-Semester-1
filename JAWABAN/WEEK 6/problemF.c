#include <stdio.h>

int TuruBang(int N, int X, int Y) {
    if (N == 0) {
        return X;
    } else if (N == 1) {
        return Y;
    } else {
        return TuruBang(N - 1, X, Y) - TuruBang(N - 2, X, Y);
    }
}

void Subuh(int T) {
    for (int jumlah = 1; jumlah <= T; jumlah++) {
        int N, X, Y;
        scanf("%d %d %d", &N, &X, &Y);

        int result = TuruBang(N, X, Y);
        printf("Case #%d: %d\n", jumlah, result);
    }
}// Stanley PT

int main() {
    int T;
    scanf("%d", &T);

    Subuh(T);

    return 0;
}
