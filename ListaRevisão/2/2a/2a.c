#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int i;
	
	for (i=1; i <= 10; i++) {
		printf("%d\n", i);
	}
}
