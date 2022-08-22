#include<stdio.h>
#include<stdlib.h>

main() {
    int maior = 0; // maior entre os homens
	int altura; 
	int alturaF = 0; // altura das mulheres
	int n = 1; // contador
	int Nvar;  // numero de pessoas 
	int Nmulher = 0; // numero de mulheres
    
	char sexo; 
	
	printf("Quantas pessoas você irá cadastrar?: ");
	scanf("%i", &Nvar);
	

    
    
	
    while(n <= Nvar) {
    	printf("Digite a altura (cm) e o sexo (M ou F): ");
        scanf("%i %c", &altura, &sexo); 
        
		if(sexo == 'F') {
			alturaF = altura + alturaF;
			Nmulher++;
		}			
			
		if(maior < altura && sexo == 'M'){
			maior = altura;
		}
								
    	n++;
  	}
  	
  	printf("A maior altura entre os homens foi: %i cm", maior);
  	printf("A media de altura das mulheres foi: %i cm\n", alturaF / Nmulher);



	return 0;
}
