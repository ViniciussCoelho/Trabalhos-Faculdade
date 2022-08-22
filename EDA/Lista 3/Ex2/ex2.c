#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Pilha.h"

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	Pilha p1, p2;
	inicializa_pilha( &p1, 32 );
    inicializa_pilha( &p2, 32 );
    int n;
    printf("Quantos números deseja inserir na pilha: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        int num;
        printf("Digite o %d número a ser inserido na pilha: ", i + 1);
        scanf("%d", &num);
		empilha( &p1, num);
    }

    // pra facilitar os testes inseri valores padrão na pilha
    for(int i = 1; i < 5; i++) {
        empilha( &p2, i);
    }

    concatena(&p1, &p2);

    mostra_pilha(p1);
	
	desaloca_pilha( &p1 );
    desaloca_pilha( &p2 );
	
	return 0;
}