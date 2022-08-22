#include <stdio.h>
#include <stdlib.h>

int fibo(int n);

int main () {
    int x;
    int resultado;

    printf("Digite o termo desejado: ");
    scanf("%d", &x);

    printf("%d", fibo(x));
}

int fibo(int n) {
    int n1 = 1, n2 = 1, n3;

    if(n == 1) return 1;
    if(n == 2) return 1;

    for (int i = 3; i <= n; i++) {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }

    return n2;
} 