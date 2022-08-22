#include <stdio.h>
#include <stdlib.h>     

int main () {
    int n1, n2, resultado = 0;

    printf("Digite o primeiro inteiro positivo: ");
    scanf("%d", &n1);

    printf("Digite o segundo inteiro positivo: ");
    scanf("%d", &n2);

    for(int i = 1; i <= n1; i++) {
        resultado = resultado + n2;
    }

    printf("Resultado: %d", resultado);
}