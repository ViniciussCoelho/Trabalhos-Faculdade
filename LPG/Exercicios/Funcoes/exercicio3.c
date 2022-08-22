#include <stdlib.h>
#include <stdio.h>

int fibo(int n);

int main() {
  int n;

  printf("Digite o n-ésimo termo desejado: ");
  scanf("%d", &n);

  int resultado = fibo(n);

  printf("Resultado: %d", resultado);
}

int fibo(int n) {
  if (n == 1 || n == 2)
    return 1;
  else
    return fibo(n-1) + fibo(n-2);
}