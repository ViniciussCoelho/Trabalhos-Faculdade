#include <stdlib.h>
#include <stdio.h>

int mdc(int dividendo, int divisor);

int main() {
  int x, y;

  printf("Digite um número inteiro: ");
  scanf("%d", &x);
  printf("Digite outro número inteiro: ");
  scanf("%d", &y);

  int resultado = mdc(x, y);

  printf("Resultado: %d", resultado);
}

int mdc(int x, int y) {
  if (y == 0)
    return x;
  else
    return mdc(y, x % y);
}

