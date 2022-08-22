#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	// Trabalho 3: Vetores
	// Aluno: Vinicius Coelho
	int j, escolha, N, M, i, v;
	int m[200000] = {};
	
	printf("Digite o numero de posicoes de memoria: ");
	scanf("%i", &N);
	
	printf("Digite o numero de instrucoes: ");
	scanf("%i", &M);
	
	for(j = 0; j < M; j++) { // Fazendo as operações até que antija o numero dado
		printf("\nEscolha uma instrucao:\n1 FRENTE I V\n2 TRAS I V\n3 IMPRIME I\n");
		scanf("%i", &escolha);
		
		switch(escolha) {
			case 1: // FRENTE i V
				printf("Digite a posicao I: ");
				scanf("%i", &i);
				i--;
				
				printf("Digite o valor V a ser somado: ");
				scanf("%i", &v);
				 
				while(v != 0 && i < N) { // Fazendo as operacoes
				 	m[i] = m[i] + v;
				 	v--;
				 	i++;
				}
			break;
			
			case 2: // TRÁS i V
				printf("Digite a posicao I: ");
				scanf("%i", &i);
				i--;
				
				printf("Digite o valor V a ser somado: ");
				scanf("%i", &v);
				 
				while(v != 0 && i >= 0) { // Fazendo as operacoes
				 	m[i] = m[i] + v;
				 	v--;
				 	i--;
				}
			break;
			
			case 3: // IMPRIME i
				printf("Digite o valor I a ser impresso: ");
				scanf("%i", &i);
				int posicao = i;
				i--;
							
				printf("Valor da posicao %i: %i ", posicao, m[i]);
				printf("\n");
		}
	}
        
	return 0;
}
