#include <stdlib.h>
#include <stdio.h>

int *uniao( int *v1, int n1, int *v2, int n2, int *p3 );

int main (int argc, char *argv[]) { 
    int n1, n2, p3;

    printf("digite a quantidade N de numeros do vetor: ");
    scanf("%d", &n1);

    int *v1 = (int *) malloc(n1 * sizeof(int));

    for(int i = 0; i < n1; i++) {
        printf("digite o %d numero: ", i + 1);
        scanf("%d", &v1[i]);
    }

    printf("digite a quantidade N de numeros do segundo vetor: ");
    scanf("%d", &n2);

    int *v2 = (int *) malloc(n2 * sizeof(int));

    for(int i = 0; i < n2; i++) {
        printf("digite o %d numero: ", i + 1);
        scanf("%d", &v2[i]);
    }

    int *p = uniao(v1, n1, v2, n2, &p3);

    printf("Vetor: ");
    for(int i = 0; i < p3; i++) {
        printf("%d ", p[i]);
    }

    free(v1);
    free(v2);
    free(p);

    return 0;
}

int *uniao( int *v1, int n1, int *v2, int n2, int *p3 ) {
    *p3 = n1 + n2;
    int *vet = (int *) malloc(*p3 * sizeof(int));

    for(int i = 0; i < n1; i++) {
        vet[i] = v1[i];
    }

    for(int i = 0; i < *p3; i++) {
        vet[n1] = v2[i];
        n1++;
    }

    return vet;
}