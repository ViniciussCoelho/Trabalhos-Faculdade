#include <stdlib.h>
#include <stdio.h>

int main () {
  char palavra[15] = "-150.0";
  int cont = 0;

  for(int i = 0;palavra[i] != '\0'; i++)
    if(palavra[i] == '.') {
      cont++;
    }

  if(cont)
    printf("true");
  else
    printf("false");
}