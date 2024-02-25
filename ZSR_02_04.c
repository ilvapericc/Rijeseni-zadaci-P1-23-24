#include <stdio.h>

/* Napisati program koji unosi 20 slova engleskog alfabeta (velikih ili malih, zanemarujuæi
ostale unesene znakove). Program ispisuje broj samoglasnika i broj suglasnika
Ilva Peric, FSRE - Racunarstvo, 2219/RR
 */

int main() {
	char z[100];
	int brsam=0, brsug=0;
	int i;
	printf("UNESI 20 ZNAKOVA ENGLESKOG ALFABETA!\n");
	for(i=0; i<20; i++) {
		fflush(stdin);
		scanf("%c", &z[i]);
	}
	for(i=0; i<20; i++) {
		if(z[i] == 'a' || z[i] == 'e' || z[i] == 'i' || z[i] == 'o' || z[i] == 'u' || 
		z[i] == 'A' || z[i] == 'E' || z[i] == 'I' || z[i] == 'O' || z[i] == 'U' ) {
			brsam++;
	}
	else {
		brsug++;
	}
	}
	printf("Uneseno je %d samoglasnika!\n", brsam);
	printf("Uneseno je %d suglasnika!", brsug);
	
	return 0;
}
