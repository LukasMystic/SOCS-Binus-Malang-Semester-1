#include <stdio.h>
#include <string.h>

struct WeatherData {
    char city[1001];
    double temperature;
    char metric;
    double temperature2;
};

void readData(FILE *file_data, struct WeatherData data[], int *file_size) {
    *file_size = 0;
    char line[1001];

    while (fgets(line, sizeof(line), file_data) != NULL) {
        (*file_size)++;
    }

    rewind(file_data);

    for (int i = 0; i < *file_size; i++) {
        fscanf(file_data, " %[^#]#%lf#%c", data[i].city, &data[i].temperature, &data[i].metric);
    }
}

void convertTemperatures(struct WeatherData data[], int file_size) {
    for (int i = 0; i < file_size; i++) {
        if (data[i].metric == 'C') {
            data[i].temperature2 = data[i].temperature;
        } else {
            data[i].temperature2 = (data[i].temperature - 32) * 5 / 9;
        }
    }
}

void sortData(struct WeatherData data[], int file_size) {
    for (int i = 0; i < file_size; i++) {
        for (int j = 0; j < file_size - i - 1; j++) {
            if (data[j].temperature2 > data[j + 1].temperature2 || 
                (data[j].temperature2 == data[j + 1].temperature2 && strcmp(data[j].city, data[j + 1].city) > 0)) {
                
                struct WeatherData temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}

void printData(struct WeatherData data[], int file_size) {
    for (int i = 0; i < file_size; i++) {
        printf("%s is %.2lf%c\n", data[i].city, data[i].temperature, data[i].metric);
    }
}

int main() {
    FILE *file_data = fopen("testdata.in", "r");

    if (file_data == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    int file_size;
    struct WeatherData data[1000];

    readData(file_data, data, &file_size);
    convertTemperatures(data, file_size);
    sortData(data, file_size);

    fclose(file_data);

    printData(data, file_size);

    return 0;
}

