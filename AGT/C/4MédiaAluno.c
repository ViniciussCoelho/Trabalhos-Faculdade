#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float n1;
	float n2;
	float n3;
	float n4;
	float exame;

	printf("Digite a nota 1 do aluno: ");
	scanf("%f", &n1);
	printf("Digite a nota 2 do aluno: ");
	scanf("%f", &n2);
	printf("Digite a nota 3 do aluno: ");
	scanf("%f", &n3);
	printf("Digite a nota 4 do aluno: ");
	scanf("%f", &n4);
	
	float media = (n1 + n2 + n3 + n4) / 4;
	
	if (media >= 7) {
		printf("O aluno foi aprovado!\n");
		printf("Media do aluno: %f\n", media);
	}else {
		if (media < 7) {
			printf("Digite a nota do exame: \n");
			scanf("%f", &exame);
		}
	}
		
	float mediaexame = (media + exame) / 2;
		
	if (mediaexame >= 5) {
		printf("Aluno aprovado em exame!\n");
		printf("Media do aluno no exame: %f\n", mediaexame);
	}else {
		printf("Aluno reprovado.\n");
		printf("Media do aluno no exame: %f\n", mediaexame);
	} 
	
return 0; 	
}
