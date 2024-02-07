#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char id[11];
    char name[21];
} Student;

int main() {
    FILE *file = fopen("testdata.in", "r");
    if (file == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    int N, T, i;
    Student students[MAX];
    char tempId[11];


    fscanf(file, "%d", &N);
    for(i = 0; i < N; i++) {
        fscanf(file, "%s %s", students[i].id, students[i].name);
    }

    fscanf(file, "%d", &T);
    for(i = 0; i < T; i++) {

        fscanf(file, "%s", tempId);

        int j, found = 0;
        for(j = 0; j < N; j++) {
            if(strcmp(students[j].id, tempId) == 0) {
                printf("Case #%d: %s\n", i+1, students[j].name);
                found = 1;
                break;
            }
        }
        if(!found) {
            printf("Case #%d: N/A\n", i+1);
        }
    }

    fclose(file);
    return 0;
}

