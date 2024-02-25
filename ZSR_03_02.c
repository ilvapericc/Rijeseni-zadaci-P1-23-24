#include <stdio.h>

/*  Napisati program koji unosi znakove sve dok se zaredom ne unesu mala slova 'k', 'r', 'a' i
'j' (ne raèunajuæi ENTER). Program ispisuje koliko je puta unesen svaki od samoglasnika
(bez obzira radi li se o velikom ili malom slovu). 
Ilva Peric,  FSRE - Racunarstvo, 2219/RR*/

int main() {
	char zn[200];
	int i=-1, j, brojac=0;
	do {
		i++;
		scanf("%c", &zn[i]);
	}while (!(zn[i - 1] == 'k' && zn[i - 2] == 'a' && zn[i - 3] == 'r' && zn[i - 4] == 'j'));

	for(j=0; j<i; j++) {
	if(zn[j] == 'a' || zn[j] == 'e' || zn[j] == 'i' || zn[j] == 'o' || zn[j] == 'u' || 
		zn[j] == 'A' || zn[j] == 'E' || zn[j] == 'I' || zn[j] == 'O' || zn[j] == 'U' ) {
			brojac++;
		}
	}
	printf("Uneseno je %d samoglasnika.\n", brojac);
	return 0;
}
