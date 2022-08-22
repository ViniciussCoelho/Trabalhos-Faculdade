#include<stdio.h>
#include<stdlib.h>


int main(){
		
	int val;
	
	printf("Digite um valor: ");
	scanf("%i", &val);
	
	if (val >= 1 && val <= 9) {
	
		printf("O valor esta na faixa permitida.");
	}
	else{
		printf("O valor esta fora da faixa permitida.");
	}

  return 0;
}



