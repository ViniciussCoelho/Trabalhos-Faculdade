#include <stdio.h>
#include <stdlib.h>

int main () {
    int resto;
    int n, mdc = 1, d = 2, mdcFinal = 1;

    printf("Quantos números inteiros serão informados: ");
    scanf("%d", &n);

    int v[n];

    // Vetor
    for(int i = 0; i < n; i++) {
        printf("Digite o %dº: ", i + 1);
        scanf("%d", &v[i]);
    }

		while ( v[0] != 1 || v[1] != 1 ) {
			if ( v[0] % d == 0 || v[1] % d == 0 ) { // Verificando se a ou b � divisivel por d
				if ( v[0] % d == 0 && v[1] % d == 0 ) { // Calculando MDC
					mdc = mdc * d;
				}	
			
				if ( v[0] % d == 0) { // Verificando a novamente para fazer a / d
					v[0] = v[0] / d;
				}
			
				if ( v[1] % d == 0 ) { // Verificando b novamente para fazer b / d
					v[1] = v[1] / d;
				}
			}
			else {
			    d++; // incrementando o divisor
			}
        }

        d = 2;

        for(int i = 2; i < n; i++) {
			if ( v[i] % d == 0 || mdc % d == 0 ) { // Verificando se a ou b � divisivel por d
				if ( v[i] % d == 0 && mdc % d == 0 ) { // Calculando MDC
					mdcFinal = mdcFinal * d;
				}	
			
				if ( v[i] % d == 0) { // Verificando a novamente para fazer a / d
					v[i] = v[i] / d;
				}
			
				if ( mdc % d == 0 ) { // Verificando b novamente para fazer b / d
					mdc = mdc / d;
				}
			}
			else {
			    d++; // incrementando o divisor
			}            
        }
        
    printf("MDC: %d", mdcFinal);
}