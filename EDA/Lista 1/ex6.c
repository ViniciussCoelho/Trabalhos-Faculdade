#include <stdlib.h>
#include <stdio.h>

float *clone( float *v, int n );

int main (int argc, char *argv[]) { 
    int n;

    printf("digite a quantidade N de numeros do vetor: ");
    scanf("%d", &n);

    float v[n];

    for(int i = 0; i < n; i++) {
        printf("digite o %d numero: ", i + 1);
        scanf("%f", &v[i]);
    }

    float *vet = clone(v, n);

    for(int i = 0; i < n; i++) {
        printf("%.2f ", vet[i]);
    }

    free(vet);
    
    return 0;
}

float *clone( float *v, int n ) {
    float *vet = malloc(n * sizeof(float));
    
    for(int i = 0; i < n; i++) {
        vet[i] = v[i];
    }

    return vet;
}