#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	// Trabalho 2 de Algoritmos: Estruturas de Repetição.
	// Feito por: Vinicius Coelho.
	
	int a, b, Ainicial, Binicial; // Valores de entrada
	int d; // Divisor
	int mmc, mdc; // MMC e MDC
	char resposta = 's'; // resposta para continuar, s para sim, n para não
	

	while (resposta == 's') {
		do {
   			printf("Digite o valor de a(inteiro): "); // Verificando a entrada de a
    		scanf("%i", &a);
		} while( a <= 0 );

		do {
   			printf("Digite o valor de b(inteiro): "); // Verificando a entrada de b
    		scanf("%i", &b);
		} while( b <= 0 );
		
		mmc = 1, mdc = 1, d = 2; // Reiniciando os valores
		
		Ainicial = a;
		Binicial = b;
		
		while ( a != 1 || b != 1 ) {
			if ( a % d == 0 || b % d == 0 ) { // Verificando se a ou b é divisivel por d
				mmc = mmc * d; // Calculando o MMC
			
				if ( a % d == 0 && b % d == 0 ) { // Calculando MDC
					mdc = mdc * d;
				}	
			
				if ( a % d == 0) { // Verificando a novamente para fazer a / d
					a = a / d;
				}
			
				if ( b % d == 0 ) { // Verificando b novamente para fazer b / d
					b = b / d;
				}
			}
			else {
			d++; // incrementando o divisor
			}
		}		
		printf("MMC(%i, %i) = %i\n", Ainicial, Binicial, mmc);
		printf("MDC = %i\n", mdc);	
		printf("Deseja continuar(s ou n)? ");
		scanf(" %c", &resposta);	
	}

		
	return 0;
}
