#include<stdio.h>
#include<stdlib.h>

int main(){

	int v1;
	int v2;
	int conta;
	
	printf("Digite um numero: ");
	scanf("%i", &v1);
	printf("Digite outro numero: ");
	scanf("%i", &v2);
	printf("Digite o numero da operacao desejada:\n 1 Adicao\n 2 Subtracao\n 3 Multiplicacao\n 4 Divisao \n");
	scanf("%i", &conta);
	
	int adicao = v1 + v2;
	int sub = v1 - v2;
	int sub2 = v2 - v1;
	int multi = v1 * v2;
	int divisao = v1 / v2;
	
	switch (conta) {
		case 1:
			printf("A soma é = %i", adicao);
			break;
		case 2:
			if (v1 > v2) {
				printf("A diferenca é = %i", sub);
			}else {
				printf("A diferenca é = %i", sub2);	
			}
			break;
		case 3:
			printf("O produto é = %i", multi);
			break;
		case 4:			
			printf("A divisao é = %i", divisao);
			break;
		default:
			printf("ERRO: a operacao escolhida nao existe!");
	}

 return 0;
}
