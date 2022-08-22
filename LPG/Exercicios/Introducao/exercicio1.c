#include <stdio.h>

int main () {
    int idade;

    do {
    printf("Digite sua idade (de 1 a 120 anos): ");
    scanf("%d", &idade);
    } while (idade < 0 || idade > 120);

    if (idade >= 18) {
        printf("É maior de idade");
    }
    else if (idade < 18) {
        printf("É menor de idade");
    }
    
}