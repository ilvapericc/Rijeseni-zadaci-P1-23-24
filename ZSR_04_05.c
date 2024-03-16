#include <stdio.h>
/* Napisati program koji unosi 5 realnih brojeva i u funkciji cetvrti_po_velicini() pronalazi onog od njih koji je èetvrti
 po velièini te ga ispisuje u funkciji ispis onoliko puta koliki je njegov cijeli dio */
float cetvrti_po_velicini(float r[]) {
	int i, j, pom;
	for(i=0; i<=4; i++) {
		for(j=i+1; j<=4; j++) {
			if(r[i] > r[j]) {
				pom = r[i];
				r[i] = r[j];
				r[j] = pom;
			}
		}
	}
	return r[3];
}
void ispis(float r[]) {
	int i;
	float cijelidio = cetvrti_po_velicini(r);
	printf("Cetvrti po velicini je:\n");
	for(i=0; i<cijelidio; i++) {
		printf("%.2f\n", r[3]);
	}
}
int main() {
	float r[4];
	int i;
	for(i=0; i<=4; i++) {
		fflush(stdin);
		scanf("%f", &r[i]);
	}
	 cetvrti_po_velicini(r);
	ispis(r);
	
	return 0;
}
