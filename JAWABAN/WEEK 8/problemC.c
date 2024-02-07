#include <stdio.h>


struct Family {
    char fatherName[31];
    char motherName[31];
    int numSiblings;
};


struct Student {
    char studentCode[31];
    char studentName[31];
    char gender[11];
    struct Family family;
};

struct Lecturer {
    char lecturerCode[31];
    char lecturerName[31];
    char gender[11];
    int numStudents;
    struct Student students[101]; 
};

int main() {
    int N;
    scanf("%d", &N);

    struct Lecturer lecturers[101]; 


    for (int i = 0; i < N; ++i) {
        struct Lecturer *lecturer = &lecturers[i];

   
        scanf("%s %s %s %d", lecturer->lecturerCode, lecturer->lecturerName, lecturer->gender, &lecturer->numStudents);

       
        for (int j = 0; j < lecturer->numStudents; ++j) {
            struct Student *student = &lecturer->students[j];
            scanf("%s %s %s", student->studentCode, student->studentName, student->gender);
            scanf("%s %s %d", student->family.fatherName, student->family.motherName, &student->family.numSiblings);
        }
    }

    int K;
    scanf("%d", &K);

    
    struct Lecturer *selectedLecturer = &lecturers[K - 1];
    printf("Kode Dosen: %s\n", selectedLecturer->lecturerCode);
    printf("Nama Dosen: %s\n", selectedLecturer->lecturerName);
    printf("Gender Dosen: %s\n", selectedLecturer->gender);
    printf("Jumlah Mahasiswa: %d\n", selectedLecturer->numStudents);

    for (int i = 0; i < selectedLecturer->numStudents; ++i) {
        struct Student *selectedStudent = &selectedLecturer->students[i];
        printf("Kode Mahasiswa: %s\n", selectedStudent->studentCode);
        printf("Nama Mahasiswa: %s\n", selectedStudent->studentName);
        printf("Gender Mahasiswa: %s\n", selectedStudent->gender);
        printf("Nama Ayah: %s\n", selectedStudent->family.fatherName);
        printf("Nama Ibu: %s\n", selectedStudent->family.motherName);
        printf("Jumlah Saudara Kandung: %d\n", selectedStudent->family.numSiblings);
    }

    return 0;
}

