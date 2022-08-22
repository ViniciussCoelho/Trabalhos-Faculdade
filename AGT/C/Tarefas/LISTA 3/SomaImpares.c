#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x;
	int y;
	int i;
	int soma;
	
	printf("Digite um valor: ");
	scanf("%d", &x);

	printf("Digite outro valor: ");
	scanf("%d", &y);	
	
	while( x < y ){
		if ( x % 2 != 0 ) {
			printf(" + %d", x);
			soma = soma + x;
		}
		x++;
	}
	
		while( x > y ){
		if ( x % 2 != 0 ) {
			printf(" + %d", x);
			soma = soma + x;
		}
		x--;
	}
	
	printf(" = %d", soma);
	
	return 0;
}
