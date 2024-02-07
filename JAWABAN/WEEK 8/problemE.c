#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Assignment {
    char title[11];
    int deadline;
};


int compareAssignments(const void *a, const void *b) {

    int deadlineDiff = ((struct Assignment *)a)->deadline - ((struct Assignment *)b)->deadline;
    

    if (deadlineDiff == 0) {
        return strcmp(((struct Assignment *)a)->title, ((struct Assignment *)b)->title);
    }

    return deadlineDiff;
}

int main() {
    int N;
    scanf("%d", &N);

    struct Assignment assignments[N];


    for (int i = 0; i < N; i++) {
        scanf("%s %d", assignments[i].title, &assignments[i].deadline);
    }

    qsort(assignments, N, sizeof(struct Assignment), compareAssignments);

    for (int i = 0; i < N; i++) {
        printf("%s\n", assignments[i].title);
    }

    return 0;
}

