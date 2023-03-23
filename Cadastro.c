#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

typedef struct {
	char nome[50];
	int idade;
	char telefone[11];
	char email[50];
} Agenda;

Agenda contato[MAX];

int main() {
	int i;
	char opcao;
	
	for(i=0; i<MAX; i++) {
		printf("Deseja incluir um contato? (s/n)\n");
		scanf("%c", &opcao);
				
		if(opcao=='s') {
		
		printf("\n\nDigite seu nome: \n");
		scanf("%s", &contato[i].nome);
		
		printf("Digite sua idade: \n");
		scanf("%d", &contato[i].idade);
		
		printf("Digite seu telefone: \n");
		scanf("%s", &contato[i].telefone);
		
		printf("Digite seu email: \n");
		scanf("%s", &contato[i].email);
		} else {
			break;
		}
		
		fflush(stdin);
		
	}
	
	printf("Contatos adicionados: \n");
	
	for(i=0; i<MAX; i++) {
			printf("\n\nContato %d :\n", i+1);
			printf("Nome: %s\n", contato[i].nome);
			printf("Idade: %d\n", contato[i].idade);
			printf("Telefone: %s\n", contato[i].telefone);
			printf("Email: %s\n", contato[i].email);
	}
	
	return 0;	
}
