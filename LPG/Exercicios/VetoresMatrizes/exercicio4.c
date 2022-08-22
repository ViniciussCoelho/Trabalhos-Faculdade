#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, k;

    do {
    printf("Quantos números inteiros serão informados: ");
    scanf("%d", &n);
    }while(n <= 0);

    printf("Digite o número K: ");
    scanf("%d", &k);

    int v[n];
    int cont = 0;

    // Pegando os números do vetor
    for(int i = 0; i < n; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &v[i]);
    }
    
    // Verificando se a soma de dois elementos da K
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(v[i] + v[j] == k) {
                cont++;
            }
        }
    }    

    // Verificando se a afirmação é verdadeira ou falsa
    if(cont)
        printf("true");
    else
        printf("false");
}