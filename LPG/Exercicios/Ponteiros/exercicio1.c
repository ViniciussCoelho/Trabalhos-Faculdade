// 1.Faça um programa que reproduza o comportamento da função realloc. O programa deve ler um conjunto de valores inteiros, armazená-los em um vetor alocado dinamicamente e, em seguida, realocar um novo espaço de memória que comporte o dobro de elementos, movendo todo conteúdo para este novo espaço de memória.

#include<stdio.h>
#include<stdlib.h>
int main () {
    int n;

    printf("Quantos números serão armazenados no vetor: ");
    scanf("%d", &n);

    int *v = calloc(n, sizeof(int));

    for(int i = 0; i < n; i++) {
        printf("Digite o %d número: ", i + 1);
        scanf("%d", &v[i]);
    }

    int n2 = n * 2;

    int *x = calloc(n2, sizeof(int));
    
    for(int i = 0; i < n; i++) {
        x[i] = v[i];
    }

    free(v);
    v = x;

    printf("\n");

    for(int i = 0; i < n2; i++) {
        printf("%d ", x[i]);
    }
}
