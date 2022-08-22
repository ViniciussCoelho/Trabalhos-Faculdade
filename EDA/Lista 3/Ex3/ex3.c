#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Pilha.h"

char* inverteTexto(char* texto, Pilha *p1);

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	Pilha p1;
	inicializa_pilha( &p1, 32 );
    char texto[30];

    printf("Digite o texto a ser inserido na pilha: ");
    scanf("%s", texto);

    printf("Texto invertido: %s", inverteTexto(texto, &p1));

    desaloca_pilha( &p1 );
	
	return 0;
}

char* inverteTexto(char* texto, Pilha *p1) {
    for(int i = 0; texto[i] != '\0'; i++) {
        empilha(p1, texto[i]);
    }

    for(int i = 0; texto[i] != '\0'; i++) {
        desempilha(p1, &texto[i]);
    }

    return texto;
}

