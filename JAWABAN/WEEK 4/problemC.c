#include <stdio.h>
int main() {
    int T, i, A[1001], B[1001];
    scanf("%d", &T);
	for (i=1;i<=T;i++){
		scanf("%d %d", &A[i], &B[i]);
	}
    for (i = 1; i <= T; i++){
        if (A[i] > B[i]) {
            printf("Case #%d: Go-Jo\n", i); // Stanley Pratama Teguh
        } else {
            printf("Case #%d: Bi-Pay\n", i);
        }
    }

    return 0;
}
