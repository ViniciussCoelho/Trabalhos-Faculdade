#include <stdlib.h>
#include <stdio.h>

int main () {
  char palavra[15] = "a  b c";
  int cont = 0;

  for(int i = 0;palavra[i] != '\0'; i++)
    if(palavra[i] == ' ' && palavra[i - 1] != ' ')
      cont++;

  printf("Quantidade de espaços em branco: %d", cont);
}