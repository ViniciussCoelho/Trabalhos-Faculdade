#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 30

int main(int argc, char *argv[]) {
	srand( time(0) );
	
	int i, soma = 0, cont = 0;
	int v[MAX]= {};
	
	for(i = 0; i<MAX; i++){
        v[i] = rand() % 50;
	}
	
	printf("Vetor:\n");	
    for(i = 0; i<MAX; i++){
        printf("%d: %d \n", i, v[i] );
        if(v[i] % 2 != 0 && v[i] > 10) {
        	soma = soma + v[i];
			cont++;
		}
	}

	printf("Média dos Valores Impares Maiores que 10: %f", (float)soma / cont);

return 0;
}
