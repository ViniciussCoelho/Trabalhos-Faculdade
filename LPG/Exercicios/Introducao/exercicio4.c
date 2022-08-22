#include <stdio.h>
#include <stdlib.h>

int main () {
    int a;
    int b;
    int c;

    printf("Digite o comprimento dos três lados: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > 0 & b > 0 & c > 0) {
        if(a == b & a == c & b == c) {
            printf("Equilátero");
        }

        else if(a == b || a == c || b == c) {
            printf("Isósceles");            
        }

        else {
            printf("Escaleno"); 
        }
    }
    else {
        printf("Entrada Inválida");
    }
}