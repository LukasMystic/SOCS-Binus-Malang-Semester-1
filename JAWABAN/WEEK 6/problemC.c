#include <stdio.h>
int AKUGILA(int z, char a, char b){
	if (z == 0){
		printf("%c", a);
		return 0;
	}
	else if (z == 1){
		printf("%c",b);
		return 0;
	}
	else return AKUGILA(z - 1, a, b) + AKUGILA(z - 2, a, b);
}
int main (){
	int jumlah, sementara, Babah;
	scanf("%d", &jumlah);
	char a = ' ';
	char b = ' ';
	for (int i = 1; i <= jumlah; i++){
		scanf("%d %c %c", &Babah, &a, &b);
		printf("Case #%d: ",i);
		sementara = AKUGILA(Babah, a, b);// Stanley Pratama Teguh
		printf("\n");
	}
	
	return 0;
}
