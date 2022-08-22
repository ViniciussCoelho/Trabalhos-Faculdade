#include <stdlib.h>
#include <stdio.h>

void max_min(int vet[], int tam, int *pMin, int *pMax);

int main (int argc, char *argv[]) { 
    int n, min, max;

    printf("digite a quantidade N de numeros do vetor: ");
    scanf("%d", &n);

    int v[n];

    for(int i = 0; i < n; i++) {
        printf("digite o %d numero: ", i + 1);
        scanf("%d", &v[i]);
    }

    max_min(v, n, &min, &max);

    printf("max: %d min: %d\n", max, min);

    return 0;
}

void max_min(int vet[], int tam, int *pMin, int *pMax) {
    *pMin = vet[0];
    *pMax = vet[0];
    for(int i = 1; i < tam; i++) {
        if (*pMin > vet[i]) *pMin = vet[i];
        if (*pMax < vet[i]) *pMax = vet[i];
    }
}