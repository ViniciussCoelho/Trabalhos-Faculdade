#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 20

int main(int argc, char *argv[]) {
	int i;
	int v[MAX]= {37, -40, -2 , -36, 40, 71, 36, 1, -1, 35, -3, -2, 9, -4, -12, -26, -31, -2, -4, -10};

	
	printf("Valores positivos:\n");
	
	for(i = 0; i<MAX; i++){
		if(v[i] > 0) {
		printf("%i : %i\n", i, v[i]);
		}
	}

return 0;
}
