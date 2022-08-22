#include "blibEx2.h"
#include <stdlib.h>
#include <stdio.h>

void inicia_matriz(Matriz *p, int x, int y){
	p->m = x;
	p->n = y;

	for(int i = 0; i < x; i++) {
		for(int j = 0; j < y; j++) {
			p->vet[i][j] = 0;
		}
	}
}

void modifica_valor(Matriz *p, int x, int y, int valor) {
	if(x > p->m || y > p->n) {
		printf("ERRO!\n");
		return;
	}

	p->vet[x][y] = valor;
}

void le_valor(Matriz *p, int x, int y) {
	if(x > p->m || y > p->n) {
		printf("ERRO!\n");
		return;
	}

	printf("O valor na posicao é: %d\n", p->vet[x][y]);
}

void compara_matriz(Matriz *p, Matriz *d) {
	int igual = 1;

	if(p->m == d->m && p->n == d->n) {

		for(int i = 0; i < p->m; i++) {
			for(int j = 0; j < p->n; j++) {
				if(p->vet[i][j] != d->vet[i][j]) {
					igual = 0;
				};
			}
		}
	}
	else {
		printf("As matrizes são diferentes.\n");
	}

	if(igual) {
		printf("As matrizes são iguais.\n");
	}
	else {
		printf("As matrizes são diferentes.\n");
	}
}

void soma_matriz(Matriz *p, Matriz *d) {
	if(d->m > p->m || d->n > p->n) {
		printf("ERRO! Tamanhos das duas matrizes são diferentes.\n");
		return;
	}

	int matriz[p->m][p->n];

	for(int i = 0; i < p->m; i++) {
		for(int j = 0; j < p->n; j++) {
			matriz[i][j] = p->vet[i][j] + d->vet[i][j];
		}
	}

	printf("Resultado da soma:\n");
	for(int i = 0; i < p->m; i++) {
		for(int j = 0; j < p->n; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

void mult_matriz(Matriz *p, Matriz *d) {
	if(d->m > p->m || d->n > p->n) {
		printf("ERRO! Tamanhos das duas matrizes são diferentes.\n");
		return;
	}

	int matriz[p->m][p->n];

	for(int i = 0; i < p->m; i++) {
		for(int j = 0; j < p->n; j++) {
			matriz[i][j] = p->vet[i][j] * d->vet[i][j];
		}
	}

	printf("Resultado da multiplicacao:\n");
	for(int i = 0; i < p->m; i++) {
		for(int j = 0; j < p->n; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

void mostra_matriz(Matriz *p) {
	printf("Matriz:\n");
	for(int i = 0; i < p->m; i++) {
		for(int j = 0; j < p->n; j++) {
			printf("%d ", p->vet[i][j]);
		}
		printf("\n");
	}
}
