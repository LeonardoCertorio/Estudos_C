#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int Numero = 7;
	if (Numero % 2 == 0) {
		printf("O n�mero %d � par!", Numero);
	} else {
		printf("O n�mero %d � �mpar!", Numero);
	} return 0;
}
