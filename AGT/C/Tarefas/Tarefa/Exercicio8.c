#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int main() {
	int i, n, n1 = 1, n2 = 1, soma;
	int v[MAX] = {1, 1};
	
	do {
		printf("Digite quantos numeros da serie voce deseja (maximo: 50): ");
		scanf("%i", &n);
	} while (n > 50);
	
	if (n == 1) {
    printf("%i ", v[0]);
  	}
  	else {
    printf("%i %i ", v[0], v[1]);
  	}

  	for (i = 2; i < n; i++) {
    v[i] = v[i-1] + v[i-2];
    printf("%i ", v[i]);
  	}
	
	return 0;
}
