#include<stdlib.h>
#include<stdio.h>

main() {
	int k = 2, x;
	float soma = 1;
	
	printf("Quantos termos? ");
	scanf("%i", &x);
	
	printf("1 + 1/%i", k);
	soma = soma + (1.0/k);
	k++;
	
	while (k <= x) {
		printf(" + 1/%i", k);
		soma = soma + (1.0/k);
		k++;
	}
	
	printf("\nSoma Armonica: %f\n", soma);
	printf("%i", k);

	return 0;
}
