#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

	int a, b, c;
	
	printf("Digite o valor de a: \n");
	scanf("%i", &a);
	printf("Digite o valor de b: \n");
	scanf("%i", &b);
	printf("Digite o valor de c: \n");
	scanf("%i", &c);
	
	int delta = (pow(b, 2)) - (4 * a * c);
	int x2 = (-b + sqrt( delta ))/ (2 * a);
	int x1 = (-b - sqrt( delta ))/ (2 * a);
	
	if (a == 0) {
		printf("a equacao nao e de segundo grau.");
	}
	else {
		   if (a != 0 && delta >= 0) {
		   	   printf("Equacao: %ix^2 + %ix + (%i)\n", a, b, c);
			   printf("Delta da equacao: %i\n", delta);
			   printf("Raizes da equacao: x1 = %i x2 = %i\n", x1, x2);
		   }
		   else {
		   		  if (a != 0 && delta < 0) {
		   		  	  printf("nao ha raizes reais.");
				  }
		    }
	}
	
return 0;
}
