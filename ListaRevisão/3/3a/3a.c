#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int i, maior, num[TAM];
	
	printf("Digite %d n�meros:\n", TAM);	
	for (i = 0; i < TAM; i++) {
  		scanf("%d", &num[i]);
  	}
	
	maior = num[0];
	
	for (i = 0; i < TAM; i++) {			
		if (num[i] > maior ) {				
			maior = num[i];			
		} else {
			continue;
		}		
	}

	printf("\n\nO maior n�mero � o %d", maior);
		
	return 0;
}
