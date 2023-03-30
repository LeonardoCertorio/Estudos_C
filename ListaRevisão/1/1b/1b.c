#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int Numero = 7;
	if (Numero % 2 == 0) {
		printf("O número %d é par!", Numero);
	} else {
		printf("O número %d é ímpar!", Numero);
	} return 0;
}
