#include <stdio.h>
#include <stdlib.h>

int main () {
    int n;
    int maior1 = 0;
    int maior2 = 0;

    printf("Quantos números diferentes serão informados: ");
    scanf("%d", &n);

    int x[n];

    for (int i = 0; i < n; i++) {
        printf("Digite o %dº: ", i + 1);
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < n; i++) {
        if(maior1 < x[i]) {
            maior1 = x[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if(maior2 < x[i] & x[i] != maior1) {
            maior2 = x[i];
        }
    }

    printf("Os maiores números são %d e %d.", maior1, maior2);
}