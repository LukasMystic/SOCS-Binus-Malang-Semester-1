#include <stdio.h>

int main() {
	
	char Bambang[100], ID[11];
	char Babah; 
	int nomor;
	scanf(" %s", ID);
	scanf(" %[^\n]", Bambang); 
	scanf(" %c %d", &Babah, &nomor);
	
	printf("Id    : %s\n", ID);
	printf("Name  : %s\n", Bambang);
    printf("Class : %c\n", Babah);
    printf("Num   : %d\n", nomor);
	
	return 0;
}
