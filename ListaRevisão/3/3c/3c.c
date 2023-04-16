#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	//x=linha ; y=columa
	int x, y, aux, matriz[TAM][TAM];
	
	printf("Preencha uma matriz %d x %d com números:\n", TAM, TAM);
	
	//leitura dos números da matriz	
	for (x = 0; x < TAM; x++) {
		for (y = 0; y < TAM; y++) {
  			scanf("%d", &matriz[x][y]);
  		}
	}
	
	//definindo variável do maior valor
	int maiorNumero = matriz[0][0];

	//percorrendo as linhas da matriz
	for (x = 0; x < TAM; x++) {
		
		//percorrendo as colunas da matriz
		for (y = 0; y < TAM; y++) {
			
			//verificando os números maiores e adicionando na variável "maiorNumero"		
			if (matriz[x][y] > maiorNumero ) {				
				maiorNumero = matriz[x][y];			
			} else {
				continue;
			}		
		}
	}
	
	//printando maior número
	printf("\n\n");	
	printf("O maior número é: %d", maiorNumero);
			
	return 0;
	
}
