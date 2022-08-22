#include <stdio.h>
#include <stdlib.h>

int main(){
	/* Trabalho 1 de Algoritmos */
	/* Feito por: Vinicius Coelho */
	
	int dia, mes, ano;
	int Ano2Digitos, DivResultado, NumeroChaveMes, NumeroChaveSec, NumDias;
	
	printf("Programa para verificar o dia da semana a partir do dia/mes/ano\n");
	
	printf ("Digite o dia: \n");
    scanf ("%i", &dia);
    	printf ("Digite o mes: \n");
    scanf ("%i", &mes);
    	printf ("Digite o ano: \n");
    scanf ("%i", &ano);
    
	if (dia >= 1 && dia <= 31 && mes >= 1 && mes <= 12 && ano >= 1800 && ano <= 2199) {
		
		/* Passo 1 */
		Ano2Digitos = ano % 100;
		
		/* Passo 2 */
		DivResultado = Ano2Digitos / 4;
	
		/* Passo 3 */
		switch (mes) {
		case 1 :
			if (ano % 400 == 0) {
			    NumeroChaveMes = 0;
			}
			else {
				if (ano % 4 == 0 && ano % 100 != 0) {
					NumeroChaveMes = 0;
				}
				else {
					NumeroChaveMes = 1;
				}
			}
		break; 
		case 2 :
			if (ano % 400 == 0) {
			    NumeroChaveMes = 3;
			}
			else {
				if (ano % 4 == 0 && ano % 100 != 0) {
					NumeroChaveMes = 3;
				}
				else {
					NumeroChaveMes = 4;
				}
			}
		break; 
		case 3 :
			NumeroChaveMes = 4;
		break; 
		case 4 :
			NumeroChaveMes = 0;
		break; 
		case 5 :
			NumeroChaveMes = 2;
		break; 
		case 6 :
			NumeroChaveMes = 5;
		break; 
		case 7 :
			NumeroChaveMes = 0;
		break; 
		case 8 :
			NumeroChaveMes = 3;
		break; 
		case 9 :
			NumeroChaveMes = 6;
		break; 
		case 10 :
			NumeroChaveMes = 1;
		break; 
		case 11 :
			NumeroChaveMes = 4;
		break; 
		case 12 :
			NumeroChaveMes = 6;
		break;
		}
		
		/* Passo 4 */
		
		if (ano >= 1800 && ano <= 1899) {
			NumeroChaveSec = 2;
		}
		else {
			if (ano >= 1900 && ano <= 1999){
				NumeroChaveSec = 0;
			}
			else {
				if (ano >= 2000 && ano <= 2099) {
					NumeroChaveSec = 6;
				}
				else {
					if (ano >= 2100 && ano <= 2199) {
						NumeroChaveSec = 4;
					}
				}
			}
		}		
		
		/* Passo 5 e 6 */
		NumDias = (Ano2Digitos + DivResultado + NumeroChaveMes + NumeroChaveSec + dia);
		
		/* Passo 7 e 8 */
		switch (NumDias % 7) {		
		  case 0 : printf ("\nSábado."); 
		  break;
		  case 1 : printf ("\nDomingo."); 
		  break;
		  case 2 : printf ("\nSegunda-Feira."); 
		  break;
		  case 3 : printf ("\nTerça-Feira."); 
		  break;
		  case 4 : printf ("\nQuarta-Feira."); 
		  break;
		  case 5 : printf ("\nQuinta-Feira."); 
		  break;
		  case 6 : printf ("\nSexta-Feira."); 
		  break;
		}			
	} else {
		printf("ERRO!");
	}

return 0;
}
 
