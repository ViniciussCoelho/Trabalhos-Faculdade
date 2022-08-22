// Faça um programa que leia um conjunto de números inteiros e armazene-os em um vetor, o qual representa um conjunto de dados. Em seguida, o programa deve ler novamente um novo conjunto de números reais com o mesmo tamanho do conjunto anterior e o armazene em um novo vetor, o qual representa um conjunto de pesos. Por fim, o programa deve retornar a média aritmética ponderada do conjunto de valores. Todos os vetores devem ser alocados dinamicamente.

#include<stdlib.h>
#include<stdio.h>

int main () {
    int n;
    double peso = 0, somaMedia = 0;

    printf("Quantas notas?: ");
    scanf("%d", &n);

    int *v = calloc(n, sizeof(int));
    double *x = calloc(n, sizeof(double));

    for(int i = 0; i < n; i++) {
        printf("Digite a %d nota: ", i + 1);
        scanf("%d", (v + i));
    
        printf("Digite o %d peso: ", i + 1);
        scanf("%lf", (x + i));

        peso = peso + *(x + i);
        somaMedia = somaMedia + (*(x + i) * *(v + i));
    }

    double mediaPond = somaMedia / peso;
    
    printf("Média Ponderada: %.2f", mediaPond);
}
