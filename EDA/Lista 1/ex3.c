#include <stdlib.h>
#include <stdio.h>

void calcula_hora(int totalMinutos, int *ph, int *pm);

int main (int argc, char *argv[]) { 
    int tm, h, m;

    printf("digite o tempo em minutos: ");
    scanf("%d", &tm);

    calcula_hora(tm, &h, &m);

    printf("hora: %d:%d\n", h, m);

    return 0;
}

void calcula_hora(int totalMinutos, int *ph, int *pm) {
    *ph = totalMinutos / 60;
    int resto = totalMinutos % 60;
    *pm = resto;
}