#include<stdlib.h>
#include<stdio.h>

main() {
	int x, n, impar = 1, cont = 1;
	
	printf("Digite um numero: ");
	scanf("%i", &x);
	
	printf("A parte inteira da raiz de %i e:\n", x);
	
	n = x - impar;
	printf("%i - %i = %i\n", x, impar, n);	
	x = n;
	
	while (n >= 0) {	
		impar = impar + 2;
		n = x - impar;
		
		if(n < 0){
			break;
		}
		
		printf("%i - %i = %i\n", x, impar, n);		
		cont++;
		x = n;
	}
	
	return 0;
}
