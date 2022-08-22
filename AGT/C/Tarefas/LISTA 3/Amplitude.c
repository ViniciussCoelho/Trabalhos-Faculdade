#include<stdio.h>
#include<stdlib.h>

main() {
    int maior, num = 1, menor;
    
 	printf("Digite um numero: ");
    scanf("%d",&num);
    maior=num;
    menor=num;

    while(num != 0) {
        printf("Digite um numero ou digite 0 para sair: ");
        scanf("%d",&num);
		
		if(num == 0){
			break;
		}
		
        if(num > maior){
            maior = num;
        }
		else {
           	if(num < menor){
			   menor = num;
			}
		}
  	}

    printf("A amplitude e: %d", maior - menor);

	return 0;
}
