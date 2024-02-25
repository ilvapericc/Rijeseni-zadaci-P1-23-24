#include <stdio.h>
/*Napisati program koji unosi cijele brojeve sve dok se èetiri puta zaredom ne unese broj
veæi od 10. Program ispisuje broj koji je unesen najviše puta.*/

int main() {
	int b[64];
	int i=-1, j, k;
	int provjera=0, nbp=0, ispis;
	do {
	 i++;
	 scanf("%d", &b[i]);
	 if(b[i-1] > 10 && b[i-2] > 10 && b[i-3] > 10) {
	 	provjera = 1;
	 }
	 }while(provjera==0);
	 
	 for(j=0; j<i; j++) {
	 	int brojac=0;
	 	for(k=0; k<i; k++) {
	 		if(b[j] == b[k]) {
			 
	 			brojac++;
	 		}
		}
		if(brojac > nbp) {
			nbp = brojac;
			ispis = b[j];
				 printf("Broj koji se ponavlja najvise puta je: %d", ispis);

		}
		
	 }
	return 0;
}
