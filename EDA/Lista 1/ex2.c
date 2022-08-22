#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define PI 3.142857

void calcula_circulo(float raio, float *pPerimetro, float *pArea);

int main (int argc, char *argv[]) { 
    float r, perimetro, area;

    printf("digite dois numeros inteiros: ");
    scanf("%f", &r);

    calcula_circulo(r, &perimetro, &area);

    printf("perimetro: %.2f\narea: %.2f\n", perimetro, area);

    return 0;
}

void calcula_circulo(float raio, float *pPerimetro, float *pArea) {
    *pPerimetro = 2 * raio * PI;
    *pArea = (raio * raio) * PI;
}