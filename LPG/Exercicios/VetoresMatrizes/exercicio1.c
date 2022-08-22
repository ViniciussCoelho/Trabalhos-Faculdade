#include <stdio.h>
#include <stdlib.h>

int main () {
    int i, n, somapeso = 0, somavalores = 0, media;

    printf("Quantos números inteiros serão informados: ");
    scanf("%d", &n);

    int x[n];

    // Vetor Valor
    for(i = 0; i < n; i++) {
        printf("Digite o %dº: ", i + 1);
        scanf("%d", &x[i]);
    }

    int y[n];

    // Vetor Peso
    for(i = 0; i < n; i++) {
        printf("Digite o peso do %dº valor: ", i + 1);
        scanf("%d", &y[i]);
        somapeso += y[i];
    }

    // Média Aritmética Ponderada
    for(i = 0; i < n; i++) {
        somavalores = somavalores + (x[i] * y[i]); 
    }

    printf("Média Aritmética Ponderada: %d\n", somavalores / somapeso);
}