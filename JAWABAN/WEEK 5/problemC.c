#include <stdio.h>
#include <ctype.h>
#include <string.h>
//Stanley Pratama Teguh
int main() {
    int T;
    scanf("%d", &T); 

    char S[1001][1001]; 
    int kasus[1001];

    for (int jumlah = 1; jumlah <= T; jumlah++) {
        kasus[jumlah] = jumlah;
        scanf("%s", S[jumlah]); 
    }

    for (int jumlah = 1; jumlah <= T; jumlah++) {
        char *str = S[kasus[jumlah]];
        int len = 0;

        // Reverse 
        int str_len = strlen(str);
        for (int i = 0; i < str_len / 2; i++) {
            char sementara = str[i];
            str[i] = str[str_len - i - 1];
            str[str_len - i - 1] = sementara;
        }

        // inverse
        while (str[len] != '\0') {
            if (islower(str[len])) {
                str[len] = toupper(str[len]);
            } else if (isupper(str[len])) {
                str[len] = tolower(str[len]);
            }
            len++;
        }

        // Output 
        printf("Case #%d: %s\n", kasus[jumlah], str);
    }

    return 0;
}
