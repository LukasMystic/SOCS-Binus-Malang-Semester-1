#include <stdio.h>
// SPT
int main() {
	int A;
	int B;
	scanf("%d %d",&A, &B);
	double C = ((double)(A - B)/A) * 100;
	printf("%.2lf%%\n", C);
	
	return 0;
}
