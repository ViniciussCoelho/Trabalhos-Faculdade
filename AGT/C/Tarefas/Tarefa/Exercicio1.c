#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 20

int main(int argc, char *argv[]) {
	srand( time(0) );
	
	int i;
	int v[MAX];
	int par = 0;
	
    for(i = 0; i<MAX; i++){
        v[i] = rand();
	}
  
	for(i = 0; i<MAX; i++){
		printf("%d: %d \n", i, v[i] );
		if(v[i] % 2 == 0) {
			par++;
		}
	}
	
	printf("Quantidade de pares: %i", par);

return 0;
}
