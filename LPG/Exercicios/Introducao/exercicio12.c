#include <stdio.h>
#include <stdlib.h>

int main () {
    int x[5] = srand() % 100;
    int palpite, tentativas = 0;
        
    do {
        printf("\nDê um palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if(x < palpite) {
            printf("\nSeu palpite é maior que o número.");
        }

        if(x > palpite) {
            printf("\nSeu palpite é menor que o número.");
        }

        if(x == palpite) {
            printf("\nVocê acertou!");
            printf("\nTentativas: %d", tentativas);
            break;
        }
    } while(palpite != x);
}