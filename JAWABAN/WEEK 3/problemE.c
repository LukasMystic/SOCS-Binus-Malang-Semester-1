#include <stdio.h>
// halo bambang saya Stanley
int main() {
    int T;
    scanf("%d", &T);
    int A;
    scanf("%d", &A);
	int B;
    scanf("%d", &B);
    int C;
    scanf("%d", &C);

    //  Reaumur
    double reaumurA = A * 4.0 / 5.0;
    double reaumurB = B * 4.0 / 5.0;
    double reaumurC = C * 4.0 / 5.0;
    // Fahrenheit
    double fahrenheitA = (A * 9.0 / 5.0) + 32.0;
    double fahrenheitB = (B * 9.0 / 5.0) + 32.0;
    double fahrenheitC = (C * 9.0 / 5.0) + 32.0;
    // Kelvin
    double kelvinA = A + 273.00;
    double kelvinB = B + 273.00;
    double kelvinC = C + 273.00;
    //output
    printf("%.2lf %.2lf %.2lf\n", reaumurA, fahrenheitA, kelvinA);
    printf("%.2lf %.2lf %.2lf\n", reaumurB, fahrenheitB, kelvinB);
    printf("%.2lf %.2lf %.2lf\n", reaumurC, fahrenheitC, kelvinC);

    return 0;
}
