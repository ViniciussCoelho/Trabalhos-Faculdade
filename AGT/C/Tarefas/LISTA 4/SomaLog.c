#include<stdlib.h>
#include<stdio.h>

main() {
	int k = 2, x;
	float soma = 1;
	
	printf("Quantos termos?");
	scanf("%i", &x);
	
	printf ("1 - 1/%i ", k);
	soma = soma - (1.0/k);
	k++;
	
	while (k <= x) {
		if (k % 2 == 0) {
			soma = soma - (1.0/k);
			printf(" - 1/%i", k);
		}
		else {
			if (k % 2 != 0) {
				soma = soma + (1.0/k);
				printf(" + 1/%i", k);
			}
		}
		k++;
	}
	
	printf("\nSoma: %f", soma);
	
	return 0; 
}
