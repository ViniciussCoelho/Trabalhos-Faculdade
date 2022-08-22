#include <stdio.h>
#include<stdlib.h>
#include <math.h>

int main(){
	
	int x;
	int y;

	printf("Digite um valor inteiro: ");
	scanf("%i", &x);
	printf("Digite outro valor inteiro: ");
	scanf("%i", &y);
	
	int soma = x + y;
	int resto = x % y;
	
	switch (resto) {
		case 1 :
			printf("soma: %i\n", soma);
			printf("resto: %i", resto);
		break;
			
		case 2 :		
			if (x % 2 == 0) {
				printf("O numero %i e par!\n", x);
			}
			else {
				printf("O numero %i e impar!\n", x);
			}
			if (y % 2 == 0) {
				printf("O numero %i e par!\n", y);
			}
			else {
				printf("O numero %i e impar!\n", y);
			}
		break;
			
		case 3 :	
			printf("O resultado de (%i + %i)* %i e: %f", x, y, x, (x+y)*x);
		break;	
		
		case 4 :
			printf("O resultado de (%i + %i)/ %i e: %i", x, y, y, (x+y)/ y);
		break;
		
		default :
			printf("%f\n", pow( x, 2 ));
			printf("%f\n", pow( y, 2 ));
		
  	}
 return 0;
}

