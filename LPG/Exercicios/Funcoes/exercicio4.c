#include <stdlib.h>
#include <stdio.h>

int fat(int n);

int main() {
  int n;

  printf("Digite um número: ");
  scanf("%d", &n);

  int resultado = fat(n);

  printf("Fatorial: %d", resultado);
}

int fat(int n) {
  if (n == 0 || n == 1)
    return 1;
  else
    return n * fat(n - 1);
}