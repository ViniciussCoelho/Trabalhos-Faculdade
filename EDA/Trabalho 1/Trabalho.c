#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Pilha.h"
#include "Matriz.h"

int *inicializa_vetor(int n);
void desaloca_vetor(int *v);
void DepthFirstSearch(Pilha *p1, Matriz *m1);

// Feito por: Vinicius Coelho. TADS-EDA

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	Pilha p1;
    Matriz m1;
    
	inicializa_pilha(&p1, 32);

    carrega_matriz_arquivo("input.txt", &m1);

    int ini;
    printf("Qual será o vértice inicial: ");
    scanf("%d", &ini);
    empilha(&p1, ini);
    printf("Vértice: %d\n", ini);

    DepthFirstSearch(&p1, &m1);

	desaloca_pilha(&p1);
	desaloca_matriz(&m1);

	return 0;
}

int *inicializa_vetor(int n) {
    int* v = (int*) calloc(n, sizeof(int));
    return v;
}

void desaloca_vetor(int *v) {
    free(v);
}

void DepthFirstSearch(Pilha *p1, Matriz *m1) {
    int x, i;
    int* vs = inicializa_vetor(m1->lin);
    vs[0] = 1;
    while(desempilha(p1, &x) != ERRO_PILHA_VAZIA) {
        if(vs[x] == 0) {
            printf("Vértice: %d\n", x+1);
            vs[x] = 1;
            for(i = 0; i < m1->lin; i++) {
                if(vs[i] == 0 && m1->dados[i][x] == 1) {
                    empilha(p1, i);
                }
            }
        }    
    }
    desaloca_vetor(vs);
}