#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {
    float temperatura;
    char nome[30];
    
    printf("Digite o nome da substancia: ");
    scanf("%s", nome);
    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    
    if (strcmp (nome, "água") == 0) {
        if (temperatura <= 0) {
            printf("estado = Sólido");
        } else {
            if (temperatura >= 100) {
                printf("estado = Gasoso");
                } else {
                printf("estado = Líquido");
            } 
        }
    } 
    else if (strcmp (nome, "ferro") == 0) {
        if (temperatura <= 1538) {
            printf("estado = Sólido");
        } else {
            if (temperatura >= 2861) {
                printf("estado = Gasoso");
            } else {
                printf("estado = Líquido");
                } 
            }
    } 
    else if (strcmp (nome, "etanol") == 0) {
            if (temperatura <= -117) {
            printf("estado = Sólido");
            } else {
                if (temperatura >= 78) {
                printf("estado = Gasoso");
                } else {
                printf("estado = Líquido");
                } 
            }
    } 
    else if (strcmp (nome, "mercúrio") == 0) {
        if (temperatura <= -38.8) {
            printf("estado = Sólido");
        } else {
            if (temperatura >= 356.6) {
                printf("estado = Gasoso");
            } else {
                printf("estado = Líquido");
                } 
            }
    } 
    else if (strcmp (nome, "ouro") == 0) {
        if (temperatura <= 1064.18) {
            printf("estado = Sólido");
        } else {
            if (temperatura >= 2856) {
                printf("estado = Gasoso");
            } else {
                printf("estado = Líquido");
            } 
        }  
    }    
    else {
            printf("entrada inválida");
        }
}