#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Pilha.h"

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	Pilha p1;
	inicializa_pilha( &p1, 32 );
	int n;
	printf("Digite um n�mero: ");
	scanf("%d", &n);

	do{
		int resto = n % 2;
		empilha( &p1, resto );
		n = n / 2;
	}while( n > 0 );

	int temp;
	while( desempilha( &p1, &temp ) != ERRO_PILHA_VAZIA ){
		printf("%d", temp);
	}

	printf("\n");
	
	desaloca_pilha( &p1 );
	
	return 0;
}

