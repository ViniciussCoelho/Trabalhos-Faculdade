#include<stdlib.h>
#include<stdio.h>
int main() {
    int a = 10;
    int *b = &a;    
    
    printf("Endereco de a %p\n",&a);    
    printf("Endereco de b %p\n",b);    
    printf("Valor de a: %d\n", a);    
    printf("Valor de b: %d\n", *b);
    a = 20;    
    printf("Valor de a: %d\n", a);    
    printf("Valor de b: %d\n", *b);
    *b = 30;    
    printf("Valor de a: %d\n", a);    
    printf("Valor de b: %d\n", *b);
}