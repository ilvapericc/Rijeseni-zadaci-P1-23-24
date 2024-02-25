#include <stdio.h>
/*Napisati program koji unosi 20 realnih brojeva i ispisuje one èiji je cijeli nije barem 100
puta veæi od njihovog decimalnog dijela.*/
int main() {
	float r[100];
	int i;
	for(i=0; i<20; i++) {
		fflush(stdin);
		scanf("%f", &r[i]);
	}
	for(i=0; i<20; i++) {
		int dec = r[i] - (int) r[i];
		int cdio = r[i] - dec;
		if(cdio > 100*dec) {
			printf("%f\n", r[i]);
		}
	}
	return 0;
}
