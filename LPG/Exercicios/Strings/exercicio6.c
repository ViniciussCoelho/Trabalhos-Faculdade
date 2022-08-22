#include <stdlib.h>
#include <stdio.h>

int main () {
  char palavra[30] = "adawdwdwdwdwdwdwdwdwdw";
  int cont = 0;

  for(int i = 0;palavra[i] != '\0'; i++)
    if(palavra[i] == palavra[i + 1])
      cont++;

  if(cont > 0)
    printf("true\n");
  else
    printf("false\n");
}