#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int NumeroUm = 7, NumeroDois =3;
	if (NumeroUm > NumeroDois) {
		printf("%d � o maior n�mero!", NumeroUm);
	} else if (NumeroDois > NumeroUm) {
		printf("%d � o maior n�mero!", NumeroDois);
	} else {
		printf("Os n�meros s�o iguais!");
	}
	return 0;
}
