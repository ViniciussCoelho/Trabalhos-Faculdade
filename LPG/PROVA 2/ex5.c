#include <stdio.h>
 
int ehPrimo(int numero, int x) {
  if (x == 1) {
    return 1;
  }

  if (numero % x == 0) {
      return 0;
  }
  else {
      return ehPrimo(numero, x - 1);
  }       
}

int main() {
  int numero, primo;

  do {
    printf("Digite um inteiro: ");
    scanf("%d", &numero);
  } while(numero <= 0);

  primo = ehPrimo(numero, numero / 2);

  if(primo == 1) {
    printf("%d é um número primo\n", numero);
  }
  else {
        printf("%d não é um número primo\n", numero);
  }

  return 0;
}
 
