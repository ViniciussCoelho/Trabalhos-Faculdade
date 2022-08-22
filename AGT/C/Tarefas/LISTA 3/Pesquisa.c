#include<stdio.h>
#include<stdlib.h>

main() {
	int n, cont = 1, contyes = 0, contno = 0, femYes = 0, mascNo = 0;
	float x, y;
	char sexo, resposta;
		
	printf("Digite o numero de pessoas a serem analisadas: ");
	scanf("%i", &n);
	

	
	while(cont <= n) {
		printf("Digite o sexo (m ou f) e a resposta ('s' para sim e 'n' para nao): ");
		scanf(" %c %c", &sexo, &resposta);
		
		
		if(resposta == 's') {
			contyes++;
		}
		else {
			if(resposta == 'n') {
				contno++;
			}
		}
		
		if(sexo == 'f' && resposta == 's') {
			femYes++;
			
		}
		else {
			if(sexo == 'm' && resposta == 'n') {
				mascNo++;			
			}
		}
		
		cont++;
	}
	
	x = (100 * femYes)/ n;
	y = (100 * mascNo)/ n;
	
	printf("Numero de pessoas que respoderam sim: %i\n", contyes);
	printf("Numero de pessoas que respoderam nao: %i\n", contno);
	printf("Percentagem de pessoas do sexo feminino que responderam sim: %2.f%\n", x);
	printf("Percentagem de pessoas do sexo masculino que responderam não: %2.f%\n", y);
	
	return 0;
}

