#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int i, numero;
	
	printf("Digite um numero para que seja impressa a tabuada dele: ");
	scanf("%d", &numero);
	
	for (i=1; i <= 10; i++) {
		printf("%d*%d=%d\n", numero, i, numero*i);
	}
}
