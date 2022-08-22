#include<stdlib.h>
#include<stdio.h>

main() {
	int x, maior = 0;
	
	while(x != 0) {
		printf("Digite um numero, ou digite 0 para sair...");
		scanf("%i", &x);
		
		if(maior < x) {
			maior = x;
		}
	}
	
	printf("O maior valor foi: %i", maior);
	
	return 0;
}
