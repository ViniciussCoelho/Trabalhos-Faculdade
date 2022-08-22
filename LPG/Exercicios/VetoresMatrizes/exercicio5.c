#include <stdio.h>
#include <stdlib.h>

int main () {
    int n;

    printf("Quantos números inteiros serão informados: ");
    scanf("%d", &n);

    int v[n];

    // Vetor
    for(int i = 0; i < n; i++) {
        printf("Digite o %dº: ", i + 1);
        scanf("%d", &v[i]);
    }

    int x[n];

    // Atribuindo 1 a todos os elementos o vetor x
    for(int i = 0; i < n; i++) {
        x[i] = 1;
    }        

    // Fazendo o produto
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            x[i] = x[i] * v[j];
        }  
        for(int j = i - 1; j >= 0; j--) {
            x[i] = x[i] * v[j];
        }
    }   

    for(int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }      

    printf("\n");

    for(int i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }        
}