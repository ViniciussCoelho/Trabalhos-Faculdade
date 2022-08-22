#include "blibEx1.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[]) { 
    Ponto p1, p2;

    le_ponto(&p1);
    le_ponto(&p2);

    calcula_distancia(p1, p2);
    
    mostra_ponto(p1);
    
    mostra_cordX(p2);
    mostra_cordY(p2);
    return 0;
}