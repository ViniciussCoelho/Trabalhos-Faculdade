#include <stdlib.h>
#include <stdio.h>

int escada(int n);

int main() {
  int n;

  printf("Digite um número: ");
  scanf("%d", &n);

  int resultado = escada(n);

  printf("Resultado: %d", resultado);
}

int escada(int n) {
  if (n == 1)
    return 1;
  else
    return escada(n-1) + escada(n-2) + escada(n-3);;
}