#include<stdio.h>
#include<stdlib.h>

main() {
	int n, val, i = 1, somaArit = 0;
	float mediaArit, mediaHar, somaHar = 0;
	
	printf("Quantos valores você quer inserir? ");
	scanf("%i", &n);
	
	while(i <= n) {
		printf("Digite um valor: ");
		scanf("%i", &val);
		if(val >= 0) {
			somaArit = somaArit + val;
			somaHar = somaHar + (1/val);
			i++;
		}
		else {
			printf("Digite um inteiro positivo\n");
		}
		
	}
	
	mediaArit = somaArit / n;
	mediaHar = n / somaHar;
	
	printf("Media Aritmetica: %.2f\n", mediaArit);
	printf("Media Harmonica: %.2f\n", mediaHar);
		
	return 0;
}
