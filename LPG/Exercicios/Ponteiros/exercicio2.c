// Faça um programa que encontre o maior e menor inteiro dentro de um vetor de inteiros alocado dinamicamente. Em seguida, deve ser exibido o maior e menor inteiro e a soma dos dois. Todas as operações de manipulação do vetor deve ser realizado a partir da aritmética de ponteiros.

#include <stdio.h>
#include <stdlib.h>

int main () {
    int *x = calloc(5, sizeof(int));

    *(x + 0) = 1;
    *(x + 1) = 2;
    *(x + 2) = 3;
    *(x + 3) = 4;
    *(x + 4) = 5;

    int maior = *x, menor = *x;

    for(int i = 1; i < 5; i++) {
        if(maior < *(x + i)) {
            maior = *(x + i);
        }

        if(*(x + i) < menor) {
            menor = *(x + i);
        }
    }

    int soma = menor + maior;

    printf("Maior valor: %d\nMenor valor: %d\nSoma do maior com o menor %d\n", maior, menor, soma);
}