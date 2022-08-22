#include <stdlib.h>
#include <stdio.h>

int divide(int dividendo, int divisor);

int main() {
  int x, y;

  printf("Digite um número inteiro: ");
  scanf("%d", &x);
  printf("Digite outro número inteiro: ");
  scanf("%d", &y);

  int resultado = divide(x, y);

  printf("Resultado: %d", resultado);
}

int divide(int dividendo, int divisor) {
  if(divisor == 1)
    return dividendo;
  
  else if (dividendo < divisor)
    return 0;
  else
    return 1 + divide(dividendo - divisor, divisor);
}