// Faça um programa que leia um conjunto de números inteiros e armazene-os em um vetor que representa este conjunto de dados. Em seguida, o programa deve retornar a média, desvio padrão e variância dos valores do vetor. O vetor deve ser alocado dinamicamente e manipulado por meio da aritmética de ponteiros.

#include<stdlib.h>
#include<stdio.h>

int main () {
    int n, aux;
    float mediana;

    printf("Quantas valores vão ser dados?: ");
    scanf("%d", &n);

    int *v = (int*) calloc(n, sizeof(int));

    for(int i = 0; i < n; i++) {
        printf("Digite o %d valor: ", i + 1);
        scanf("%d", (v + i));
    }

    // Ordena o Vetor
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(*(v + i) > *(v + j)) {
                aux = *(v + i);
                *(v + i) = *(v + j);
                *(v + j) = aux;
            }
        }
    }

    // Mediana
    int nMetade = n / 2;

    if(n % 2 != 0) {
        mediana = *(v + nMetade);
    }
    else {
        mediana = (float)(*(v + nMetade) + *(v + (nMetade - 1))) / 2;
    }

        // Moda
    int contModa = 0;
    int moda = 0;
    int cont = 0;

    for(int i = 0; i < n; i++) {
        cont++;
        if(*(v + i) != *(v + i + 1)){
            if(cont > contModa) {
                contModa = cont;
                moda = *(v + i);
            }
            cont = 0;
        }
    }

    printf("Vetor: [ ");
    for(int i = 0; i < n; i++)
    printf("%d ", *(v + i));
    printf("]");

    printf("\nMediana: %.2f\n", mediana);
    printf("Moda: %d\n", moda);
}
