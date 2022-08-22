#include <stdlib.h>
#include <stdio.h>

float calculaMedia( float soma, int n );
void maiorMedia( float *v, int n, float media );

int main (int argc, char *argv[]) { 
    int n;
    float soma = 0;

    printf("digite a quantidade N de numeros do vetor: ");
    scanf("%d", &n);

    float *vet = (float *) malloc(n * sizeof(float));

    for(int i = 0; i < n; i++) {
        printf("digite o %d numero: ", i + 1);
        scanf("%f", &vet[i]);
        soma += vet[i];
    }

    float media = calculaMedia(soma, n);
    maiorMedia(vet, n, media);

    free(vet);
    
    return 0;
}

void maiorMedia( float *v, int n, float media ) {
    int j = 0;
    float *vetmedia = malloc(sizeof(float));
    
    for(int i = 0; i < n; i++) {
        if(v[i] >= media) {
            vetmedia[j] = v[i];
            vetmedia = (float *) realloc(vetmedia, (j + 2) * sizeof(float));
            j++;
        }
    }

    printf("Valores maiores que a media: ");
    for(int i = 0; i < j; i++) {
        printf("%.2f ", vetmedia[i]);
    }

    free(vetmedia);
}

float calculaMedia( float soma, int n ) {
    return soma/n;
}