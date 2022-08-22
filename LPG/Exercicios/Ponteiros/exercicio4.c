// Faça um programa que leia um conjunto de números inteiros e armazene-os em um vetor que representa este conjunto de dados. Em seguida, o programa deve retornar a média, desvio padrão e variância dos valores do vetor. O vetor deve ser alocado dinamicamente e manipulado por meio da aritmética de ponteiros.

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main () {
    int n, soma = 0;
    float somaDesv = 0;

    printf("Quantas valores vão ser dados?: ");
    scanf("%d", &n);

    int *v = calloc(n, sizeof(int));

    for(int i = 0; i < n; i++) {
        printf("Digite o %d valor: ", i + 1);
        scanf("%d", (v + i));
        soma = soma + *(v + i);
    }

    float media = (float)soma / n;
    
    for(int i = 0; i < n; i++) {
        somaDesv = somaDesv + pow((*(v + i) - media), 2);
    }

    float desvPad = sqrt((somaDesv / n));
    float variancia = somaDesv / n;

    printf("Média: %.2f\n", media);
    printf("Desvio Padrão: %.2f\n", desvPad);
    printf("Variância: %.2f\n", variancia);
}
