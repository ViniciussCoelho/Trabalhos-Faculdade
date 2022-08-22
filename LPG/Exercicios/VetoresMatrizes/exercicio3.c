#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, aux;
    float mediana;

    printf("Quantos números inteiros serão informados: ");
    scanf("%d", &n);

    int x[n];

    // Vetor
    for(int i = 0; i < n; i++) {
        printf("Digite o %dº: ", i + 1);
        scanf("%d", &x[i]);
    }

    // Ordena o Vetor
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(x[i] > x[j]) {
                aux = x[i];
                x[i] = x[j];
                x[j] = aux;
            }
        }
    }

    // Mediana
    if(n % 2 == 0) {
        mediana = ((float)x[(n/2)-1] + (float)x[n/2])/2;
    } else {
        mediana = (float)x[n/2];
    }

    // Moda
    int contModa = 0;
    int moda = 0;
    int cont = 0;

    for(int i = 0; i < n; i++) {
        cont++;
        if(i == n - 1 || x[i] != x[i+1]){
            if(cont > contModa) {
                contModa = cont;
                moda = x[i];
            }
            cont = 0;
        }
    }

    for(int i = 0; i < n; i++)
        printf("%d, ", x[i]);

    printf("Mediana: %.2f\n", mediana);
    printf("Moda: %d\n", moda);
}