#include <stdio.h>
#include <string.h>

struct Student {
    char name[11];
    int value;
};

void sortStudents(struct Student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].value < arr[j + 1].value || (arr[j].value == arr[j + 1].value && strcmp(arr[j].name, arr[j + 1].name) > 0)) {
                struct Student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int findRank(struct Student arr[], int n, char *studentName) {
    for (int i = 0; i < n; i++) {
        if (strcmp(arr[i].name, studentName) == 0) {
            return i + 1;
        }
    }
    return -1;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);

        struct Student students[N];
        for (int i = 0; i < N; i++) {
            scanf(" %10[^#]#%d", students[i].name, &students[i].value);
        }

        sortStudents(students, N);

        char queryName[11];
        scanf(" %10s", queryName);

        int rank = findRank(students, N, queryName);

        printf("Case #%d: %d\n", t, rank);
    }

    return 0;
}

