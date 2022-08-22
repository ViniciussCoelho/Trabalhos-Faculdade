#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "Pilha.h"

int eh_palindrome( char palavra[] );

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");

    char palavra[30];
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    if(eh_palindrome(palavra) == 0) {
        printf("É palindrome!\n");
    }
    else {
        printf("Não é palindrome!\n");
    }
	
	return 0;
}

int eh_palindrome( char palavra[] ) {
    Pilha p1;
	inicializa_pilha( &p1, 32 );

    for(int i = 0; palavra[i] != '\0'; i++) {
        empilha(&p1, palavra[i]);
    }
    
    char invertido[30];

    for(int i = 0; palavra[i] != '\0'; i++) {
        desempilha(&p1, &invertido[i]);
    }

    desaloca_pilha( &p1 );
    return strcmp(palavra, invertido);
}