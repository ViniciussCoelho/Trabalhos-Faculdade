#include <stdio.h>
#include <stdlib.h>



int main () {
    struct produto {
        char nome[30];
        float preco;
        int quantidade;
    };

    float total, desconto = 0;

    struct produto p;
    printf("Digite o nome do produto: ");
    fgets(p.nome, 30, stdin);
    printf("Digite o preço e quantidade comprada: ");
    scanf("%f %d", &(p.preco), &(p.quantidade));

    if (p.quantidade >= 6 && p.quantidade <= 15) {
        desconto = 0.1;
    }
    if (p.quantidade >= 16) {
        desconto = 0.2;
    }

    total = (p.preco * p.quantidade) - (p.preco * p.quantidade * desconto);

    printf("\nProduto: %s", p.nome);
    printf("\nPreço: %.2f", p.preco);
    printf("\nQuantidade: %d", p.quantidade);
    printf("\nTotal: R$ %.2f\n", total);
}