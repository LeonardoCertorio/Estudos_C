#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int x, y, aux, matriz[TAM][TAM];

	//x=linha ; y=columa
	
	printf("Digite %d números:\n", TAM);	
	for (x = 0; x < TAM; x++) {
		for (y = 0; y < TAM; y++) {
  			scanf("%d", &matriz[x][y]);
  		}
	}

	int maior = matriz[0][0];

	for (x = 0; x < TAM; x++) {
		
		for (y = 0; y < TAM; y++) {			
			if (matriz[x][y] > maior ) {				
				maior = matriz[x][y];			
			} else {
				continue;
			}		
		}
	}
	
	printf("\n\n");
	
	printf("O maior número é: ", maior);
			
	return 0;
	
}