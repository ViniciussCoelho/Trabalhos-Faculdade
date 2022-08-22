#include<stdio.h>
#include<stdlib.h>

main() {
	int x, y, z, soma, sub, mult, div;
	
	do {
		printf("Digite o numero da operacao desejada:\n 1-Soma\n 2-Subtracao\n 3-Divisao\n 4-Multiplicacao\n 5-Sair\n");
		scanf("%i", &x);
		printf("\n");
		
		switch(x) {
			case 1:
				printf("Digite 2 numeros: ");
				scanf("%i %i", &y, &z);
				soma = y + z;
				printf("%i + %i = %i\n", y, z, soma);
				printf("\n");
			break;
			
			case 2:
				printf("Digite 2 numeros: ");
				scanf("%i %i", &y, &z);
				sub = y - z;
				printf("%i - %i = %i\n", y, z, sub);
				printf("\n");
			break;			
			
			case 3:
				printf("Digite 2 numeros: ");
				scanf("%i %i", &y, &z);
				div = y/z;
				printf("%i / %i = %i\n", y, z, div);
				printf("\n");
			break;		
			
			case 4:
				printf("Digite 2 numeros: ");
				scanf("%i %i", &y, &z);
				mult = y * z;
				printf("%i x %i = %i\n", y, z, mult);
				printf("\n");
			break;								
		}		
	} while(x != 5);
		
	return 0;
}
