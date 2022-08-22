#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *repetidor( char *s, int n );

int main (int argc, char *argv[]) { 
    int n;

    printf("digite a quantidade N de numeros do vetor: ");
    scanf("%d", &n);

    char texto[n];


    printf("digite o texo: ");
    scanf("%s", texto);
    

    char* novo =  repetidor(texto, n);


    printf("%s", novo);

    free(novo);
    
    return 0;
}

char *repetidor( char *s, int n ) {
    size_t tamanho = strlen(s);
    char *novo = malloc(n * tamanho * sizeof(char));
    strcpy(novo, s);
    for(int i = 1; i < n; i++) {
        strcat(novo, s);
    }

    return novo;
}