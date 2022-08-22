#include <stdio.h>
#include <stdlib.h>

int *funcao (int n);

int main(){

    int n;

    printf("Insira o tamanho do vetor: ");
    scanf("%d", &n);

    int *v = funcao(n);

    int smaior, smenor;
    smaior = v[n-2];
    smenor = v[1];

    printf("\nSegundo maior elemento = %d", smaior);
    printf("\nSegundo menor elemento = %d", smenor);

    return 0;
}

int *funcao (int n){
    int *v = (int*) malloc(n * sizeof(int));

    for (int cont=0; cont<n; cont++){
        printf("Digite o valor da posição %d: ", cont);
        scanf("%d", &v[cont]);
    }

    int aux;

    for (int i=0;i<n; i++){
        for( int j=i+1;j<n;j++){
            if (v[i]>v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }

    return v;
}