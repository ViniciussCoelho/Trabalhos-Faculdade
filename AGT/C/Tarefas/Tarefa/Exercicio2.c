#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i;
	int v[30] = {0, 2, 0, 0, 36, 0, 0, 59, 0, 21, 0, 0, 38, 0, 0, 13, 0, 18, 0, 0, 36, 0, 0, 27, 0, 26, 0, 0, 15, 0};
	
	printf("Vetor inicial:\n");
	
    for(i = 0; i<30; i++){
        printf("%d: %d \n", i, v[i] );
	}
	
	printf("Vetor atualizado:\n");
  
	for(i = 0; i<30; i++){
		if(v[i] == 0) {
			v[i] = 1;
		}
		printf("%d: %d \n", i, v[i] );
	}

return 0;
}
