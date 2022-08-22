#include<stdio.h>
#include<stdlib.h>

int main(){ 

	float x; 
	float y;
	
	printf("Digite o valor de x: ");
	scanf("%f", &x);
	printf("Digite o valor de y: ");
	scanf("%f", &y);
	
	if (x > 0 && y > 0) {
	   printf("Quadrante 1");
	} 
	else {
		  if (x < 0 && y > 0) {
				printf("Quadrante 2");
			} else {
					if (x < 0 && y < 0) {
						printf("Quadrante 3");
					} else {
							if (x > 0 && y < 0) {
								printf("Quadrante 4");
							} else {
									if (x == 0 && y == 0) {
										printf("está na origem");
									} else {
											if (x == 0 && y != 0) {
												printf("está sobre o eixo x");
											} else {
													if (x != 0 && y == 0) {
														printf("está sobre o eixo y");
													}
												}
										}
								}
						}
				}
		}
		
return 0;
}
