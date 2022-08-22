#include <stdlib.h>
#include <stdio.h>

void max_vetor(float vet[], int tam, float *pMax, int *pIndice);

int main (int argc, char *argv[]) { 
    int n, indice;
    float max;

    printf("digite a quantidade N de numeros do vetor: ");
    scanf("%d", &n);

    float v[n];

    for(int i = 0; i < n; i++) {
        printf("digite o %d numero: ", i + 1);
        scanf("%f", &v[i]);
    }

    max_vetor(v, n, &max, &indice);

    printf("max: %.2f na posicao: %d\n", max, indice);

    return 0;
}

void max_vetor(float vet[], int tam, float *pMax, int *pIndice) {
    *pMax = vet[0];
    *pIndice = 0;
    for(int i = 1; i < tam; i++) {
        if (*pMax < vet[i]) {
            *pMax = vet[i];
            *pIndice = i;
        }
    }
}