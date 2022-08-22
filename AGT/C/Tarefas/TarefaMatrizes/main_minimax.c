#include <stdio.h>
#include <stdlib.h>

#define L 5
#define C 5

int main(int argc, char *argv[]) {
	//Algoritmo feito por: Vinicius Coelho
	//Definir o minimax
	
	int m[L][C]= {5, 12, 44, 2, -1,
				  27, 81, 18, 9, 56,
				  20, -7, 36, 500, 84,
				  110, 125, 45, 27, 66,
				   0, 3, 7, 11, -3};
	int i, j, max, minimax, getlin, getcolun;
		
printf("Matriz Original:\n");
	for( i = 0 ; i < L ; i++ ){
		for( j = 0 ; j < C ; j++ )
			printf("%4d ", m[i][j]);
		printf("\n");
	}
	

	
	for( i = 0 ; i < L ; i++ ){
		for( j = 0 ; j < C ; j++ ){	
		 	if (max < m[i][j] ){
		 		max = m[i][j];
		 		getlin = i;
		 	}
		}	
	}

	minimax = m[getlin][0];	
	
	for( j = 0 ; j < C ; j++ ){
		if(minimax > m[getlin][j] ) {
			minimax = m[getlin][j];
			getcolun = j;	
		}
	}
	
	printf("\nMinimax: %i\nCoordenadas: l[%i] c[%i] ", minimax, getlin, getcolun);
	return 0;
}
