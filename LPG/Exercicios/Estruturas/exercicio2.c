#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char placa[30];
    enum categoria {Carro = 1, Moto, Caminhao, Onibus}tipo; 
    char modelo[30];
    char ano[4];
} veiculo;

int main () {
    int escolha, i = 0;
    veiculo v[30];

    do {
        printf("Escolha uma opção:\n1.Incluir um veículo\n2.Listar veículos\n3.Finalizar Programa\n");
        scanf("%d", &escolha);
        switch(escolha) {
            case 1:
                printf("Digite a placa: ");
                scanf(" %s", v[i].placa);
                printf("Digite a categoria 1.Carro, 2.Moto, 3.Caminhão,4.Ônibus: ");
                scanf(" %u", &v[i].tipo);
                printf("Digite o modelo: ");
                scanf(" %s", v[i].modelo);
                printf("Digite o ano: ");
                scanf(" %s", v[i].ano);
                i++;
            break;

            case 2:
                for(int j = 0; j < i; j++) {
                    printf("Placa: %s Categoria: %u Modelo: %s Ano: %s \n", v[j].placa, v[j].tipo, v[j].modelo, v[j].ano);
                }
            break;

            case 3:
                return 0;
        }
    } while(escolha != 3);
}