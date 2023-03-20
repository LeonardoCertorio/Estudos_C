#include <stdio.h>

int main () {
	int NumFibo=0, ProxNumFibo=1;
	int Fibonacci=0;
	int NumUsuario;

	printf("Digite o numero que deseja conferir na sequencia de fibonacci:\n");
	scanf("%d", &NumUsuario);

	while (Fibonacci<NumUsuario) {                                      
    	Fibonacci = NumFibo + ProxNumFibo;
    	NumFibo = ProxNumFibo;
		ProxNumFibo = Fibonacci;
	}

	if (NumUsuario==Fibonacci) {
		printf("O numero pertence a sequencia");
	} else {
		printf("O numero nao pertence a sequencia");
	}

}
