#include <stdio.h>
#include <stdlib.h>

int main () {
    int clima;
    int tempo;

    printf("Como está o tempo?:\n1.Sol\n2.Nuvens\n3.Chuva\nDigite o número da opção desejada: ");
    scanf("%d", &clima);

    switch(clima) {
        case 1: 
            printf("Como está a umidade?:\n1.Elevada\n2.Normal\nDigite o número da opção desejada: ");
            scanf("%d", &tempo);

            if (tempo == 1) {
                printf("não");
            }
            else if (tempo == 2) {
                printf("sim");
            }
            else {
                printf("Entrada Inválida.");
            }   
        break;

        case 2: 
            printf("sim");
        break;

        case 3: 
            printf("Como está o vento?:\n1.Suave\n2.Forte\nDigite o número da opção desejada: ");
            scanf("%d", &tempo);

            if (tempo == 1) {
                printf("sim");
            }
            else if (tempo == 2) {
                printf("não");
            }
            else {
                printf("Entrada Inválida.");
            }          
        break;

        default: printf("Entrada Inválida.");
    }
}