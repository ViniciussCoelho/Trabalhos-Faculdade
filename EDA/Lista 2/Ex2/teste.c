#include <stdio.h>

int comparaMatrizes (int n, int m, int v1[n][m], int v2[n][m]);

int main (){
    int n, m;

    printf("Digite o número de linhas das matrizes: ");
    scanf("%d", &n);

    printf("Digite o número de colunas das matrizes: ");
    scanf("%d", &m);
    
    int v1[n][m];
    int v2[n][m];
    
    printf("Digite os elementos da primeira matriz\n");
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            printf("Digite o número %dx%d da matriz: ", i + 1, j + 1);
            scanf("%d", &v1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz\n");
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            printf("Digite o número %dx%d da matriz: ", i + 1, j + 1);
            scanf("%d", &v2[i][j]);
        }
    }

    int igual = comparaMatrizes(n, m, v1, v2);

    if(igual) {
        printf("As matrizes são iguais");
    }
    else {
        printf("As matrizes são diferentes");
    }


    return 0;
}

int comparaMatrizes (int n, int m, int v1[n][m], int v2[n][m]){
    int cont = 1;

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if(v1[i][j] != v2[i][j]) {
                cont = 0;
                return cont;
            }
        }
    }

    return cont;
}