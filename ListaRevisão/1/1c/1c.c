#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int ano;
	
	printf("Digite um ano para verifica se o mesmo � bissexto: ");
	scanf("%d", &ano);
	if (ano % 4 == 0 || ano % 100 == 0) {
		printf("O ano %d � bissexto!", ano);
	} else {
		printf("O ano %d n�o � bissexto!", ano);
	} return 0;
}
