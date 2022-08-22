#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "Pilha.h"

int mensagemSecreta(char conta[]);

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
    char texto[30];

    printf("Digite uma operação: ");
    fgets(texto, 30, stdin);
	
    mensagemSecreta(texto);

	return 0;
}

int mensagemSecreta(char conta[]) {
    Pilha p1;
    char lixo;
    inicializa_pilha( &p1, 32 );
    for(int i = 0; i <= conta[i] != '\0'; i++) {
        if(conta[i] == '(') {
            empilha(&p1, conta[i]);
        }

        if(conta[i] == ')') {
            if(pilha_vazia(p1)) {
                printf("Fecha parênteses sem abre parênteses (posição %d).", i);
                return ERRO_PILHA_VAZIA;
            }
            else {
                desempilha(&p1, &lixo);
            }
        }

    }
    if(!pilha_vazia(p1)) {
        printf("Há parênteses abertos que não foram fechados.");
        return ERRO_PILHA_VAZIA;
    }
    else printf("OK!");

    desaloca_pilha( &p1 );
}

