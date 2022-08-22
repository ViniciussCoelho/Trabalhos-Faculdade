#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int main(int argc, char *argv[]) {
	
	int i = 0;
	int x[MAX]= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int y[MAX]= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int z[MAX]= {};
	
	printf("Vetor resultante:\n");
	
	for(i = 0; i<MAX; i++){
		z[i] = x[i] * y[i];
		printf("%i : %i\n", i, z[i]);
	}

return 0;
}
