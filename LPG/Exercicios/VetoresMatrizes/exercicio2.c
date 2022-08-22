#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int i, n;
    float soma = 0, media;

    printf("Quantos números inteiros serão informados: ");
    scanf("%d", &n);

    int x[n];
    int somaValores = 0;

    // Vetor
    for(i = 0; i < n; i++) {
        printf("Digite o %dº: ", i + 1);
        scanf("%d", &x[i]);
        somaValores += x[i];
    }

    media = somaValores / n;
    
    // Desvio Padrão
    for(i = 0; i < n; i++) {
        soma = soma + pow((x[i] - media), 2);
    }

    float variancia = soma / n;
    float desvio = sqrt(variancia);

    printf("Média Aritmética: %.2f\n", media);
    printf("Desvio Padrão: %.2f\n", desvio);
    printf("Variância: %.2f\n", variancia);
}