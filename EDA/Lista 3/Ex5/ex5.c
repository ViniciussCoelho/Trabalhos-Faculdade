#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "Pilha.h"

void mensagemSecreta(char texto[], char resultado[]);

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");
	
    char texto[30], resultado[30];

    printf("Digite o texto a ser inserido na pilha: ");
    fgets(texto, 30, stdin);

    mensagemSecreta(texto, resultado);

    printf("Texto invertido: %s\n", resultado);
	
    return 0;
}

void mensagemSecreta(char texto[], char resultado[]) {
    Pilha p1;
    inicializa_pilha( &p1, 30 );
    int i, j = 0, k;

    for(i = 0; texto[i] != '\0'; i++) {
        if(texto[i] == ' ') {
            for(k = j; k < i; k++) {
                empilha(&p1, texto[k]);
            }

            while(!pilha_vazia(p1)) {
                desempilha(&p1, &resultado[j]);
                j++;
            }
            resultado[j] = ' ';
            j++;
        }
    }

    for(k = j; k < i; k++) {
        empilha(&p1, texto[k]);
    }

    while(!pilha_vazia(p1)) {
        desempilha(&p1, &resultado[j]);
        j++;
    }

    resultado[j] = '\0';

    desaloca_pilha( &p1 );
}

