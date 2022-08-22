#include<stdio.h>
#include<stdlib.h>

int main(){

	int n1;
	int n2;
	int n3;
	int n4;
	int n5;

	printf("Digite um numero inteiro: ");
	scanf("%i", &n1);
	printf("Digite um numero inteiro: ");
	scanf("%i", &n2);
	printf("Digite um numero inteiro: ");
	scanf("%i", &n3);
	printf("Digite um numero inteiro: ");
	scanf("%i", &n4);
	printf("Digite um numero inteiro: ");
	scanf("%i", &n5);
	
	int media = (n1 + n2 + n3 + n4 + n5) / 5;
	
	printf("A media é: %i\n", media);
	
	if (n1 > media) {
		printf("%i, ", n1);
	}
	if (n2 > media) {
		printf("%i, ", n2);
	}
	if (n3 > media) {
		printf("%i, ", n3);
	}
	if (n4 > media) {
		printf("%i, ", n4);
	}
	if (n5 > media) {
		printf("%i", n5);
	}
	
 return 0;
}
