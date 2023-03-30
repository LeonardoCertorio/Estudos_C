#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int NumeroUm = 7, NumeroDois =3;
	if (NumeroUm > NumeroDois) {
		printf("%d é o maior número!", NumeroUm);
	} else if (NumeroDois > NumeroUm) {
		printf("%d é o maior número!", NumeroDois);
	} else {
		printf("Os números são iguais!");
	}
	return 0;
}
