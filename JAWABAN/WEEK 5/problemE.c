#include <stdio.h>
#include <string.h>
//Stanley PT
int main() {
    int T;
    scanf("%d", &T);

    char kata[T][501]; // Array untuk kata
    int hasil[T];    // Array untuk hasil

    // baca
    for (int t = 0; t < T; t++) {
        scanf("%s", kata[t]);

        int panjang = strlen(kata[t]);
        int INIPALINDROMEASTAGAFIRULLAH = 1; // dianggap saja :)

        for (int i = 0, j = panjang - 1; i < j; i++, j--) {
            if (kata[t][i] != kata[t][j]) {
                INIPALINDROMEASTAGAFIRULLAH = 0; // ternyata gue salah :v
                break;
            }
        }

        hasil[t] = INIPALINDROMEASTAGAFIRULLAH;
    }

    // output
    for (int t = 0; t < T; t++) {
        printf("Case #%d: ", t + 1);
        if (hasil[t]) {
            printf("Yay, it's a palindrome\n");
        } else {
            printf("Nah, it's not a palindrome\n");
        }
    }

    return 0;
}
