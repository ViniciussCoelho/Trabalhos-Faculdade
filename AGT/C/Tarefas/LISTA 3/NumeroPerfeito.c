#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x;
	int soma;
	int div = 1;
	int xPerf = 0;
	
	printf("Verificador de Numero Perfeito\n");
	
	printf("Digite um numero:");
	scanf("%d", &x);
	
	while(div < x) {
		if(x % div == 0) {
			xPerf = xPerf + div;
		}
		div++;
	}
	
	if (xPerf == div)
    {
      printf("NUMERO PERFEITO");
    }
    else {
    	printf("O NUMERO NAO E PERFEITO");
	}
	
	return 0;
}
