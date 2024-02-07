#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 1000

typedef struct {
    int number;
    char name[41];
} Plant;

int compare(const void *a, const void *b) {
    Plant *plantA = (Plant *)a;
    Plant *plantB = (Plant *)b;
    return strcmp(plantA->name, plantB->name);
}

int main() {
    FILE *file = fopen("testdata.in", "r");
    if (file == NULL) {
        printf("Could not open file \n");
        return 1;
    }

    int N, i;
    Plant plants[MAX];

    fscanf(file, "%d", &N);
    for(i = 0; i < N; i++) {
        fscanf(file, "%d#%[^\n]", &plants[i].number, plants[i].name);
    }

    qsort(plants, N, sizeof(Plant), compare);


    for(i = 0; i < N; i++) {
        printf("%d %s\n", plants[i].number, plants[i].name);
    }

    fclose(file);
    return 0;
}

