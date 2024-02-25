#include <stdio.h>
/* Napisati program koji unosi realne brojeve sve dok se dva puta zaredom ne unesu brojevi sa istim cijelim dijelom (npr. 3.76 i 3.421).
 Program ispisuje prosjek negativnih unesenih brojeva, a ako nije unesen niti jedan negativan broj ispisuje poruku o tome.
Ilva Peric, FSRE - Racunarstvo, 2219/RR */
int main() {
	float b[64], suma, as;
	int i = -1, j, brojac=0;

	printf("Unosi realne brojeve, za prekid unosa moraju imati isti decimalni dio!\n");
	do {
		i++;
		scanf("%f", &b[i]);	
	}while((int)b[i-1] != (int)b[i]);
	for(j=0; j<i; j++) {
		if(b[j] < 0) {
				suma = suma + b[j];
		brojac++;
		}
	}

	printf("Prosjek %.2f", suma/brojac);

	
	return 0;
}
