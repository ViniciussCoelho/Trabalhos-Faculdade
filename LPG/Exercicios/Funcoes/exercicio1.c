#include <stdlib.h>
#include <stdio.h>

int multiplica(int x, int y);

int main() {
  int x, y;

  printf("Digite um número inteiro: ");
  scanf("%d", &x);
  printf("Digite outro número inteiro: ");
  scanf("%d", &y);

  int resultado = multiplica(x, y);

  printf("Resultado: %d", resultado);
}

int multiplica(int x, int y) {
  if(x == 0)
    return 0;
  else if (x < 0)
    return y + (multiplica(x + 1, y));
  else
    return y + (multiplica(x - 1, y));
}