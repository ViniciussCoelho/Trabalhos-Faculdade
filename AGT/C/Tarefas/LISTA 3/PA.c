#include<stdio.h>
#include<stdlib.h>

main() {
	float i, r, var;
	int n, cont = 1;
	
	printf("Quantos termos? ");
	scanf("%i", &n);
	
	printf("Digite o valor inicial: ");
	scanf("%f", &i);
	
	printf("Digite a razao: ");
	scanf("%f", &r);
	
	printf("P.A =");
	
	while(cont <= n){
		printf("%2.f ", i);
		i = i + r;
		cont++;
	}

	
	return 0;
}
