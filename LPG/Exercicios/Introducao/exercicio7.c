#include <stdio.h>
#include <stdlib.h>

int main () {
    int x;
    int resultado;

    printf("Digite um número positivo: ");
    scanf("%d", &x);

    if (x < 0) {
        printf("Entrada Inválida.");
    }
    else {
        for (int i = 0; i <= x; i++) {
            if (i % 2 == 0) {
                printf("%d\n", i);
            }
        }
    }
}