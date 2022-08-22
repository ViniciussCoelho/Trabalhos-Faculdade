    #include <stdio.h>
    #include <stdlib.h>

    int main () {
        int x;
        int ehprimo = 0;
        
        printf("Digite um número positivo: ");
        scanf("%d", &x);

        for (int i = 1; i <= x; i++) {
            if (x % i == 0) {
                ehprimo++;
            }
        }
        
        if(ehprimo == 2) printf("%d é primo.", x);
        else printf("%d não é primo.", x);
    }