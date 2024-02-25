#include <stdio.h>

/* Napisati program koji unosi èetiri prirodna broja te raèuna i ispisuje njihov najveæi
zajednièki djelitelj (najveæi prirodni broj s kojim su djeljiva sva èetiri unesena broja).
Ilva Peric, FSRE - Racunarstvo, 2219/RR
*/

int main() {
	int prvi, drugi, treci, cetvrti, i, nzd;
	printf("Unesi prvi broj!");
	scanf("%d", &prvi);
	printf("Unesi drugi broj!");
	scanf("%d", &drugi);
	printf("Unesi treci broj!");
	scanf("%d", &treci);
	printf("Unesi cetvrti broj!");
	scanf("%d", &cetvrti);
	for(i=1; i<prvi && i<drugi && i<treci && i<cetvrti; i++) {
		if((prvi % i == 0) && (drugi % i == 0 ) && (treci % i == 0) && (cetvrti % i == 0)) {
			nzd = i;
		}
	}
	printf ("\n________________________________________\n");
	printf(" Najveci zajednicki djelitelj je: %d", nzd);
	return 0;
}
