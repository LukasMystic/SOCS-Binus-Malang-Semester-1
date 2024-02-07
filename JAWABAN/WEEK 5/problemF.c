#include <stdio.h>
#include <ctype.h>

int main() {
    char SAATNYATIDUR[10001];
    fgets(SAATNYATIDUR, sizeof(SAATNYATIDUR), stdin);
//Stanley Pratama T
    for (int i = 0; SAATNYATIDUR[i] != '\0'; i++) {
        if (isalpha(SAATNYATIDUR[i])) {
            SAATNYATIDUR[i] = toupper(SAATNYATIDUR[i]);
            switch (SAATNYATIDUR[i]) {
                case 'I':
                    SAATNYATIDUR[i] = '1';
                    break;
                case 'R':
                    SAATNYATIDUR[i] = '2';
                    break;
                case 'E':
                    SAATNYATIDUR[i] = '3';
                    break;
                case 'A':
                    SAATNYATIDUR[i] = '4';
                    break;
                case 'S':
                    SAATNYATIDUR[i] = '5';
                    break;
                case 'G':
                    SAATNYATIDUR[i] = '6';
                    break;
                case 'T':
                    SAATNYATIDUR[i] = '7';
                    break;
                case 'B':
                    SAATNYATIDUR[i] = '8';
                    break;
                case 'P':
                    SAATNYATIDUR[i] = '9';
                    break;
                case 'O':
                    SAATNYATIDUR[i] = '0';
                    break;
            }
        }
    }

    printf("%s", SAATNYATIDUR);

    return 0;
}
