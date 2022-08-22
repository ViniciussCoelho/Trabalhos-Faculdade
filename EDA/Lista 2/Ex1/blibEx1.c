#include "blibEx1.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void le_ponto(Ponto *p){
	printf("Digite a coordenada x: ");
	scanf("%d", &p->x);
	printf("Digite a coordenada y: ");
	scanf("%d", &p->y);
}

void calcula_distancia(Ponto a, Ponto b) {
    float resultado = sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
    printf("A distância dos pontos é: %.2f\n", resultado);
}

void mostra_ponto(Ponto p) {
    printf("Ponto:\nx:%d\ny:%d\n", p.x, p.y);
}

void mostra_cordX(Ponto p) {
	printf("Coord x: %d\n", p.x);
}

void mostra_cordY(Ponto p) {
	printf("Coord y: %d\n", p.y);
}
