#include<stdio.h>
#include<stdlib.h>

int main(){

	int valor, valorpago;
	
	
	printf("Digite o valor da compra: \n");
	scanf("%i", &valor);
	
	printf("Digite o valor pago pelo cliente: \n");
	scanf("%i", &valorpago);
	
	int troco = valorpago - valor;
	
	int n50 = troco / 50;
	int restante = troco % 50;
	
	  
	int n20 = restante / 20;
	restante = restante % 20;
	  
	int n10 = restante / 10;
	restante = restante % 10;
	
	int n5 = restante / 5;
	restante = restante % 5;
	
	int n2 = restante / 2;
	
	int n1 = restante % 2;
	
	if (n50 != 0) {
		printf("%i notas de R$ 50.\n", n50);
	}
	if (n20 != 0) {
		printf("%i notas de R$ 20.\n", n20);
	}
	if (n10 != 0) {
		printf("%i notas de R$ 10.\n", n10);
	}
	if (n5 != 0) {
		printf("%i notas de R$ 5.\n", n5);
	}
	if (n2 != 0) {
		printf("%i notas de R$ 2.\n", n2);
	}
	if (n1 != 0) {
		printf("%i moeda de R$ 1.\n"), n1;
	}

return 0;
}
