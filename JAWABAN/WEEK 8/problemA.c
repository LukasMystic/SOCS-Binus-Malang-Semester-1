#include <stdio.h>

struct Student {
    char name[101];
    char nim[10];
    int age;
    char postalCode[7];
    char placeOfBirth[101];
    char dateOfBirth[101];
    char highSchool[101];
    int numSiblings;
    int height;
    char bankAccountNumber[10];
};

int main() {
    int N;
    scanf("%d", &N);

    struct Student students[N];
    for (int i = 0; i < N; i++) {
        scanf(" %[^\n] %9s %d %6s %[^\n] %[^\n] %[^\n] %d %d %9s",
              students[i].name,
              students[i].nim,
              &students[i].age,
              students[i].postalCode,
              students[i].placeOfBirth,
              students[i].dateOfBirth,
              students[i].highSchool,
              &students[i].numSiblings,
              &students[i].height,
              students[i].bankAccountNumber);
    }

    // Output
    for (int i = 0; i < N; i++) {
        printf("Mahasiswa ke-%d:\n", i + 1);
        printf("Nama: %s\n", students[i].name);
        printf("NIM: %s\n", students[i].nim);
        printf("Umur: %d\n", students[i].age);
        printf("Kode Pos: %s\n", students[i].postalCode);
        printf("Tempat Lahir: %s\n", students[i].placeOfBirth);
        printf("Tanggal Lahir: %s\n", students[i].dateOfBirth);
        printf("Almamater SMA: %s\n", students[i].highSchool);
        printf("Jumlah Saudara Kandung: %d\n", students[i].numSiblings);
        printf("Tinggi Badan: %d\n", students[i].height);
        printf("NOMOR REKENING: %s\n", students[i].bankAccountNumber);
    }

    return 0;
}

