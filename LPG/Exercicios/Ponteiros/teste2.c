#include<stdio.h>
int main() {
    int v[5] = { 1, 2, 3, 4, 5 };    
    
    printf("%p\n", v); //endereço de v    
    printf("%d\n", v[0]); //valor do primeiro elemento de v (valor 1)    
    printf("%d\n", *v); //valor do primeiro elemento de v (valor 1)    
    printf("%p\n", v + 3); //endereço do quarto elemento de v    
    printf("%d\n", *(v + 3)); //valor no quarto elemento de v (valor 4)
}