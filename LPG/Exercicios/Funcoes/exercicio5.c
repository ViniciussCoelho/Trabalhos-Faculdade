#include <stdlib.h>
#include <stdio.h>

int inverte(char x[100], int n);

int main() {
  int n;

  printf("Quantos caracteres? ");
  scanf("%d", &n);

  char x[n];

  printf("Digite um texto: ");
  scanf("%s", x);

  int resultado = inverte(x, n);

  printf("Resultado: %d", resultado);
}

int inverte(char x[100], int n) {
  if(n == 1)
    return x[0];
  return x[n - 1] + x[n - 2];
}