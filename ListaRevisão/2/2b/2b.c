#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int i, numero, fatorial;
	
	printf("Digite um número inteiro para descobrir o fatorial dele: ");
	scanf("%d", &numero);
	
	i=numero;
	
	for (fatorial=1; 1 < i ; i=i-1) {
		
		fatorial = fatorial * i;
	}
	
	printf("O fatorial de %d é %d", numero, fatorial);

}
