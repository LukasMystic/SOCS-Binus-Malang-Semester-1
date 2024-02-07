#include <stdio.h>//stanley Pratama Teguh

int main() {
    int N, M, Q;
    scanf("%d %d %d", &N, &M, &Q);

    int array[N][M]; //2d array

    // membuat array
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            array[i][j] = 0;
        }
    }
	// input array
    for (int i = 0; i < Q; i++) {
        int X, Y, A;
        scanf("%d %d %d", &X, &Y, &A);

        // Update 
        array[X][Y] = A;
    }

    // Output 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d", array[i][j]);
            if (j < M - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
