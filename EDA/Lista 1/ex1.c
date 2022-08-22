#include <stdlib.h>
#include <stdio.h>

void troca_valor(float *x, float *y);

int main (int argc, char *argv[]) { 
    float x, y;

    printf("digite dois numeros inteiros: ");
    scanf("%f %f", &x, &y);

    troca_valor(&x, &y);

    printf("%.0f %.0f\n", x, y);

    return 0;
}

void troca_valor(float *x, float *y) {
    int aux;

    aux = *x;
    *x = *y;
    *y = aux;
}