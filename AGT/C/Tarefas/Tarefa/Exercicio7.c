#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 30

int main(int argc, char *argv[]) {
	srand( time(0) );
	
	int v[N]= {};
	int i, j, maximo = N, aux;

	
	for(i = 0; i<N; i++){
        v[i] = rand() % 9;
	}
	
	printf("Vetor original\n");
	
	for(i = 0; i<N; i++){
        printf("%i ", v[i]);
	}
	
	printf("\nVetor invertido\n");
	
    for (i = 0; i < maximo/2; i++) {
        j = maximo - i - 1;
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
	}
 
    for (i = 0; i < maximo; ++i) {
       printf("%i ", v[i]);
	}

return 0;
}
