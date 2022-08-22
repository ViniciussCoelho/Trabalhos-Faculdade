#include <stdio.h>
#include <stdlib.h>     

int main () {
    int dividendo, divisor, quociente = 0;

    printf("Digite um número: ");
    scanf("%d", &dividendo);

    printf("Digite o divisor: ");
    scanf("%d", &divisor);

    while (dividendo >= divisor) {
        dividendo = dividendo - divisor;
        dividendo = dividendo;
        quociente++;
    }
    printf("Resultado: %d", quociente);
}