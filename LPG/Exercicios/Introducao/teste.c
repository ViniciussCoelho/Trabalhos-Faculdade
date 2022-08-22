#include <stdio.h>

int main () {
    int k, n;
    int f = 1;

    printf("Digite um numero inteiro nao negativo:");
    scanf("%d", &n);

    k = 1;
    
    while (k <= n) {
        f = f * k; /* f = f * k é equivalente a f *= k */
        k = k + 1; /* k = k + 1 é equivalente a k++ */
    }
    
    printf("Fatorial = %d \n", f);
    
    return 0;
}
