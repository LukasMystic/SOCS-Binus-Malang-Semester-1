#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Data {
    char name[51];
    int number;
};

void bubbleSort(struct Data *data, int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if ((data[j].number < data[j + 1].number) ||
                (data[j].number == data[j + 1].number && strcmp(data[j].name, data[j + 1].name) > 0)) {
                struct Data temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);

        struct Data data[N];

        for (int i = 0; i < N; i++) {
            scanf("%[^#]#%d", data[i].name, &data[i].number);
        }

        bubbleSort(data, N);

        printf("Case #%d:", t);
        for (int i = 0; i < N; i++) {
            printf("%s - %d", data[i].name, data[i].number);
        }

        if (t < T) {
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}

