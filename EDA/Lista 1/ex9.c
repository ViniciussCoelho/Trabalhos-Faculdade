#include <stdlib.h>
#include <stdio.h>

void separaNum( float *v, float *vp, float *vn,  int tam, int p, int n );
int contPositivo(float *v, int tam);

int main (int argc, char *argv[]) { 
    int tam, p, n;

    printf("digite a quantidade N de numeros do vetor: ");
    scanf("%d", &tam);

    float *v = (float *) malloc(tam * sizeof(float));

    for(int i = 0; i < tam; i++) {
        printf("digite o %d numero: ", i + 1);
        scanf("%f", &v[i]);
    }
    
    p = contPositivo(v, tam);
    n = tam - p;

    float *vp = (float *) malloc(p *sizeof(float));
    float *vn = (float *) malloc(n * sizeof(float));

    separaNum(v, vp, vn, tam, p, n);

    printf("Vetor: ");
    for(int i = 0; i < tam; i++) {
        printf("%.2f ", v[i]);
    }

    printf("\nValores positivos: ");
    for(int i = 0; i < p; i++) {
        printf("%.2f ", vp[i]);
    }

    printf("\nValores negativos: ");
    for(int i = 0; i < n; i++) {
        printf("%.2f ", vn[i]);
    }


    free(v);
    free(vp);
    free(vn);

    return 0;
}

int contPositivo(float *v, int tam) {
    int p = 0;

    for(int i = 0; i < tam; i++) {
        if(v[i] > 0) {
            p++;
        }
    }

    return p;
}

void separaNum( float *v, float *vp, float *vn,  int tam, int p, int n ) {
    int j = 0, z = 0;

    for(int i = 0; i < tam; i++) {
        if(v[i] > 0) {
            vp[j] = v[i];
            j++;
        }

        if(v[i] < 0) {
            vn[z] = v[i];
            z++;
        }
    }
}