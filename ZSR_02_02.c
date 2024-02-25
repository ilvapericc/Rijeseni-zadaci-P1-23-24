#include <stdio.h>
/* Napisati program koji unosi znakove sve dok se ne unese znak * i ispisuje koliko je od
unesenih znakova samoglasnika, ne vodeæi raèuna radi li se o malim ili velikim slovima.
Ilva Peric, FSRE - Racunarstvo, 2219/RR
 */

int main() {
	char znakovi[100];
	int i=-1, brojac = 0, j;
	do {
		i++;
		scanf("%c", &znakovi[i]);
	}while(znakovi[i] != '*');
	for(j=0; j<i; j++) {
		if(znakovi[j] == 'a' || znakovi[j] == 'e' || znakovi[j] == 'i' || znakovi[j] == 'o' || znakovi[j] == 'u' || 
		znakovi[j] == 'A' || znakovi[j] == 'E' || znakovi[j] == 'I' || znakovi[j] == 'O' || znakovi[j] == 'U' ) {
			brojac++;
		}
		
	}
	printf("Uneseno je %d samoglasnika!", brojac);
	
	return 0;
}
