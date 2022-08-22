#include<stdio.h>
#include<stdlib.h>

int main(){

	char nome[20];
	float salario;
	
	printf("Digite seu nome: \n");
	scanf ("%[^\n]s", &nome);
	
	printf("Digite o seu salário atual: \n");
	scanf("%f", &salario);
	
	if (salario <= 400) {
	printf("Nome: %s\n", nome);
	printf("Aumento de: 15%%\n");
	printf("Salario atual: %f\n", salario);
	printf("Novo Salario: %f\n", (salario * 0.15) + salario);
	} 
	else {
	if (salario > 400 && salario <= 700) {
	  printf("Nome: %s\n", nome);
	  printf("Aumento de: 12%%\n");
	  printf("Salario atual: %f\n", salario);
	  printf("Novo Salario: %f\n", (salario * 0.12) + salario);
	} 
	else {
		if (salario > 700 && salario <= 1000) {
			printf("Nome: %s\n", nome);
			printf("Aumento de: 10%%\n");
			printf("Salario atual: %f\n", salario);
			printf("Novo Salario: %f\n", (salario * 0.10) + salario);
		}			
	 	else {
			  if (salario > 1000 && salario <= 1800) {
				 printf("Nome: %s\n", nome);
				 printf("Aumento de: 7%%\n");
				 printf("Salario atual: %f\n", salario);
				 printf("Novo Salario: %f\n", (salario * 0.07) + salario);
				}				
		 	  else {
					if (salario > 1800 && salario <= 2500) {
						printf("Nome: %s\n", nome);
						printf("Aumento de: 4%%\n");
						printf("Salario atual: %f\n", salario);
						printf("Novo Salario: %f\n", (salario * 0.04) + salario);
					}				
			 		else {
			 			  if (salario > 2500) {
							  printf("Nome: %s\n", nome);
							  printf("Sem aumento\n");
							  printf("Salario atual: %f\n", salario);
							}
						}
				    }
			}
		}
	}
			 	 
return 0;
}
