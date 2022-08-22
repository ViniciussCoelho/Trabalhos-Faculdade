#include<stdio.h>
#include<stdlib.h>

int main(){

	char sexo;
	float altura;
	
	printf("Digite a altura (metros): ");
	scanf ("%f", &altura);
	
	printf("Digite seu sexo (m ou f): ");
	scanf( " %c", &sexo);
	
	if (sexo == 'm') {
	   printf("Seu peso ideal é: %f", (72.7 * altura) - 58);
	} else {
		if (sexo == 'f') {
	        scanf("Seu peso ideal é: %f", (62.1*altura) - 44.7);
	   
		}
	}

 return 0;
}
