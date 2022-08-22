#include "blibEx2.h"
#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[]) { 
    Matriz p1, p2;

    inicia_matriz(&p1, 5, 5);
    inicia_matriz(&p2, 5, 5);

    modifica_valor(&p1, 2, 3, 10);
    modifica_valor(&p2, 2, 3, 10);

    le_valor(&p1, 2, 3);

    mostra_matriz(&p1);

    compara_matriz(&p1, &p2);

    soma_matriz(&p1, &p2);

    mult_matriz(&p1, &p2);

    return 0;
}