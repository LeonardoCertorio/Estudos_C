#include <stdio.h>
#include <locale.h>
#define TAM 7

void FuncBubbleSort(int numero[], int tam) {
	
	int i, j, auxiliar;
	
	for (i = 0; i < TAM; i++) {
		for (j = 0; j < TAM - i - 1; j++) {
			if (numero[j] > numero[j+1] ) {
				auxiliar = numero[j];
				numero[j] = numero[j+1];
				numero[j+1] = auxiliar;
			}
		}
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int i, opcao, numero[TAM];
	
	for (i = 0; i < TAM; i++) {
		printf("\nDigite o número %d: ", i+1);
  		scanf("%d", &numero[i]);
  	}
  	
  	FuncBubbleSort(numero, TAM);
		
	printf("\nDeseja exibir os números de forma:\n1 - Crescente\n2 - Decrescente\nEscolha:  ");
	scanf("%d", &opcao);	
	printf("\n");
	
	if (opcao==1){
		for (i = 0; i < TAM; i++) 
			printf("%d, ", numero[i]); 		
	} else if (opcao==2) {		
		for (i = TAM - 1; i >= 0; i--)
			printf("%d, ", numero[i]);	
	} else {
		printf("Digite uma opção válida!");		
	}		
	return 0;	
}
