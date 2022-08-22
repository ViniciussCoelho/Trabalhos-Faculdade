#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, i, j, aux;

    printf("Quantos números serão informados: ");
    scanf("%d", &n);

    int x[n];

    for(i = 0; i < n; i++) {
        printf("Digite o %dº: ", i + 1);
        scanf("%d", &x[i]);
    }

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(x[i] > x[j]) {
                aux = x[i];
                x[i] = x[j];
                x[j] = aux;
            }
        }
    }

    printf("Os maiores valores são: %d e %d", x[n - 1], x[n - 2]);
}