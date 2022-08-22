#include <stdlib.h>
#include <stdio.h>

int main () {
  char palavra[30] = "abcdefgh";

  for(int i = 0; palavra[i] != '\0'; i++)
    if(palavra[i] >= 'a' && palavra[i] <= 'z')
      palavra[i] = palavra[i] - 32;

  printf("Palavra: %s", palavra);
}