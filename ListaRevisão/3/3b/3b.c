#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

//COM ERRO NA OP��O DECRESCENTE

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int i, j, aux, num[TAM];
	
	printf("Digite %d n�meros:\n", TAM);	
	for (i = 0; i < TAM; i++) {
  		scanf("%d", &num[i]);
  	}
		
	for (i = 0; i < TAM; i++) {
		
		for (j = 0; j < TAM - i - 1; j++) {
			
			if (num[j] > num[j+1] ) {
			
				aux = num[j];
				num[j] = num[j+1];				
				num[j+1] = aux;
				
			} else {
				
				continue;
				
			}
		}		
	}
	
	printf("\n\n");
	
	int escolha;
	
	printf("Deseja exibir os n�meros de forma:\n1 - Crescente\n2 - Decrescente\nEscolha:  ");
	scanf("%d", &escolha);
	
	printf("\n\n");
	
	if (escolha==1){
		
		for (i = 0; i < TAM; i++) {
		printf("%d\n", num[i]);
		}
		
	} else if (escolha==2) {
		
		for (i = TAM; i >= 0; i--) {
		printf("%d\n", num[i]);
		}
		
	} else {
		
		printf("Erro!");
		
	}
		
	return 0;
	
}
