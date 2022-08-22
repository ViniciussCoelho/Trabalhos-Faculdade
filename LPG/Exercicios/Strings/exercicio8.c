#include <stdio.h>
#include <string.h>

int levenshtein(char[], int, char[], int);
int min(int, int, int);
 
int levenshtein(char a[], int m, char b[], int n) {
	int M[m][n];

	//Inicializa matriz com o resultado das iterações prévias
	for (int i = 0; i < m; i++) {
		M[i][0] = i;
	}

	for (int j = 0; j < n; j++) {
		M[0][j] = j;
	}

	for (int i = 1; i < m; i++) {
		for (int j = 1; j < n; j++) {
			int custo = 0;
			
			if (a[i] != b[j]) {
				custo = 1;
			}

			int substituir = M[i - 1][j - 1] + custo; //Substitui o último caractere a[i] por b[j], caso diferentes
			int remover = M[i - 1][j] + 1; //Remove o último caractere a[i]
			int inserir = M[i][j - 1] + 1; //Adicionar o último caractere b[j] após a[i] 

			M[i][j] = min(substituir, remover, inserir);
		}
	}
	
	return M[m - 1][n - 1];
}

int min(int a, int b, int c) {
	int min = a;

	if (min > b) {
		min = b;
	}

	if (min > c) {
		min = c;
	}

	return min;
}
 
int main() {
    char a[] = "exercito";
    char b[] = "exercicio";

	int op = levenshtein(a, strlen(a), b, strlen(b));
    
	printf("Distância entre '%s' e '%s': %d\n", a, b, op);
 
    return 0;
}