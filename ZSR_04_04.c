#include <stdio.h>
/* Napisati program koji unosi 100 znakova i u funkciji ispis() ispisuje samo ona unesena slova koja se ponavljaju toèno 3 puta*/

void ispis(char znakovi[20]) {
	int i,j, brojac=0;
	for(i=0; i<20; i++) {
		for(j=0; j<i; j++) {
			if(znakovi[i] == znakovi[j]) {
				brojac++;
			}
			
		}
		if(brojac == 3) {
				printf("Slova koja se ponavljaju 3 puta su %c\n", znakovi[i]);
			}
	}
}

int main() {
	char znakovi[100];
	int i;
	printf("Unesi 100 znakova!");
	for(i=0; i<20; i++) {
		fflush(stdin);
		scanf("%c", &znakovi[i]);
	}
	ispis(znakovi);
	return 0;
}
