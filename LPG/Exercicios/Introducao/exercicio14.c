#include <stdio.h>
#include <stdlib.h>     

int main () {
    int base, exp, resultado;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &exp);

    resultado = base;

    for(int i = 2; i <= exp; i++) {
        resultado = resultado * base;
    }

    printf("Resultado: %d", resultado);
}