#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, aux;

    do {
    printf("Quantos tamanhos de luvas serão informados: ");
    scanf("%d", &n);
    }while(n <= 0);

    int v[n];
    int pares = 0;

    // Vetor
    for(int i = 0; i < n; i++) {
        printf("Digite o tamanho da %dª luva: ", i + 1);
        scanf("%d", &v[i]);
    }

    // Ordena o Vetor
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(v[i] > v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    
    // Compara os valores
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(v[i] == v[j]) { 
                pares++;       
                i++;
                break;
            }
        }
    }    

    printf("Número de pares de luvas: %d", pares);
}