#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int bag[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &bag[i]);
    }
    for (int i = 0; i < M; i++) {
        int toRemove;
        scanf("%d", &toRemove);
        for (int j = 0; j < N; j++) {
            if (bag[j] == toRemove) {
                bag[j] = -1; 
            }
        }
    }
    int maxNumber = -1;
    for (int i = 0; i < N; i++) {
        if (bag[i] != -1 && (maxNumber == -1 || bag[i] > maxNumber)) {
            maxNumber = bag[i];
        }
    }
    if (maxNumber != -1) {
        printf("Maximum number is %d\n", maxNumber);
    } else {
        printf("Maximum number is -1\n");
    }
    return 0;
}

