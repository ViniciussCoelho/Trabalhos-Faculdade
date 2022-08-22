#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int Fmin;
	int Fmax;
	int celsius;
	
	printf("Digite o valor minimo (em Fahrenheit): ");
	scanf("%d", &Fmin);

	printf("Digite o valor maximo (em Fahrenheit): ");
	scanf("%d", &Fmax);	
	
	printf("TABELA FAHRENHEIT | CELSIUS\n");
	
	while ( Fmin <= Fmax ){
		celsius = (Fmin - 32) * 5 / 9;
		printf("%d | %d\n", Fmin, celsius);
		Fmin = Fmin + 2;
	}

	return 0;
}
