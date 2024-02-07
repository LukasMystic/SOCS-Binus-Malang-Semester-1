#include <stdio.h>
#include <string.h>

struct WordMapping {
    char shortForm[255];
    char longForm[255];
};

void printWordsRecursively(char tempWords[][55], struct WordMapping *wordMappings, int numMappings, int currentIndex, int totalWords) {
    if (currentIndex == totalWords) {
        return;
    }

    int isMappingValid = 0;
    int validMappingIndex;

    for (int j = 0; j < numMappings; j++) {
        if (strcmp(tempWords[currentIndex], wordMappings[j].shortForm) == 0) {
            isMappingValid = 1;
            validMappingIndex = j;
            break;
        }
    }

    if (isMappingValid) {
        printf("%s", wordMappings[validMappingIndex].longForm);
    } else {
        printf("%s", tempWords[currentIndex]);
    }

    if (currentIndex < totalWords - 1) {
        printf(" ");
    }

    printWordsRecursively(tempWords, wordMappings, numMappings, currentIndex + 1, totalWords);
}

void readWordMappings(FILE *file, struct WordMapping *wordMappings, int currentIndex, int numMappings) {
    if (currentIndex == numMappings) {
        return;
    }

    fscanf(file, "%[^#]#%[^\n]\n", wordMappings[currentIndex].shortForm, wordMappings[currentIndex].longForm);
    readWordMappings(file, wordMappings, currentIndex + 1, numMappings);
}

void processTestCase(FILE *file, struct WordMapping *wordMappings, int numMappings, int currentIndex, int testCase) {
    char inputArr[255];
    fscanf(file, "%[^\n]\n", inputArr);

    char tempWords[255][55];
    int index = 0;
    int j = 0;

    for (int i = 0; i <= strlen(inputArr); i++) {
        if (inputArr[i] == ' ' || inputArr[i] == '\0') {
            tempWords[index][j] = '\0';
            index++;
            j = 0;
        } else {
            tempWords[index][j++] = inputArr[i];
        }
    }

    printf("Case #%d:\n", testCase);
    printWordsRecursively(tempWords, wordMappings, numMappings, 0, index);
    puts("");
}


int main() {
    FILE *inputFile = fopen("testdata.in", "r");
    
    int numMappings;
    fscanf(inputFile, "%d\n", &numMappings);
    struct WordMapping wordMappings[numMappings + 1];
    readWordMappings(inputFile, wordMappings, 0, numMappings);

    int numTestCases;
    fscanf(inputFile, "%d\n", &numTestCases);

    for (int testCase = 1; testCase <= numTestCases; testCase++) {
        processTestCase(inputFile, wordMappings, numMappings, 0, testCase);
    }

    fclose(inputFile);
    return 0;
}

