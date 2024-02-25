#include <stdio.h>
/* Napisati program koji za uneseni prirodni broj ispisuje poruku radi li se o složenom broju,
te ako se radi o složenom broju (broju koji nije prost) i koji je zbroj svih njegovih djelitelja
(npr. djelitelji broja 18 su 1, 2, 3, 6, 9, i 18 pa je njihov zbroj 39).
Ilva Peric, FSRE - Racunarstvo, 2219/RR
 */

int main() {
	int i, j, broj, prost, suma;
	printf("Unesi neki broj!\n");
	scanf("%d", &broj);
	for(i=2; i<=broj; i++) {
		if(broj % i == 0) {
			prost = 0;
		}
	}
	if(prost == 0) {
		printf("Broj je slozen!\n");
		for(i=1; i<=broj; i++) {
			if(broj % i == 0) {
				printf("%d\n", i);
				suma = suma + i;
			}
		}
		printf("Suma iznosi: %d", suma);
	}
	else {
		("Broj je slozen!");
	}
	

	
	return 0;
}
