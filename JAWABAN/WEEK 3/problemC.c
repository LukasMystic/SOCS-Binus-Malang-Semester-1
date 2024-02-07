#include <stdio.h>
// SPT
int main() {
	double A;
	double B;
	scanf("%d %d",&A, &B);
	double C = B / A * 100;
	printf("%.4lf%%\n", C);
	
	return 0;
}
