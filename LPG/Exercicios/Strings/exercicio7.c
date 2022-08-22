#include <stdlib.h>
#include <stdio.h>

int main () {
  char palavra[15] = "AAAABBBCCDAA";
  int cont = 0;
  
  for(int i = 0;palavra[i] != '\0'; i++) {
    cont = 1;
    while(palavra[i] == palavra[i + 1]) {
      cont++;
      i++;
    }
    printf("%d%c", cont, palavra[i]);
  }

}
