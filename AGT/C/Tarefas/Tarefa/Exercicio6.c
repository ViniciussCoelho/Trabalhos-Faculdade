#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 30

int main(int argc, char *argv[]) {
	srand( time(0) );
	
	int i, acima = 0, soma = 0, somaAcima = 0, cont = 0;
	float media;
	int v[MAX]= {};
	
	for(i = 0; i<MAX; i++){
        v[i] = rand() % 50;
	}
	
    for(i = 0; i<MAX; i++){
        soma = soma + v[i];
	}	
	
	media = soma / 30.0;
	
	printf("\nMedia de todos os valores: %f\n", media);
	
	printf("\nValores acima da media:\n");
	for(i = 0; i<MAX; i++){
        if(v[i] > media) {
        	printf("%d: %d \n", i, v[i] );
        	acima++;
        	somaAcima = somaAcima + v[i];
		}
	}
	
	printf("\nNumero de valores acima da media: %i\n", acima);
	
	printf("\nSoma dos valores acima da media: %i\n", somaAcima);
	
	int porcentagemAcima = (acima * 100) / 30;
	
	printf("\nPorcentagem dos valores acima da media: %i%%\n", porcentagemAcima);
	
	
return 0;
}
