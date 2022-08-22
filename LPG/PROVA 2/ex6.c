#include <stdio.h>
#include <string.h>

int main() {
  char palavra[30], buffer[100];
  int bufferTamanho, palavraTamanho, i, j, cont = 0;

  FILE *file;
  file = fopen("in.txt", "r");

  if (file == NULL) {
    printf("Não foi possível abrir o arquivo.");
    return 0;
  }

  printf("Qual palavra você deseja procurar no arquivo?: ");
  scanf(" %s", palavra);

  palavraTamanho = strlen(palavra);

  while (fgets(buffer, sizeof buffer, file) != NULL) {
    i = 0;
    bufferTamanho = strlen(buffer);

    while (i < bufferTamanho) {
      j = 0;

      // compara a palavra do buffer com a palavra dada pelo usuário
      while (i < bufferTamanho && j < palavraTamanho && buffer[i] == palavra[j]) {
        ++i;
        ++j;
      }

			// Verifica se a palavra é igual a que está no buffer, caso seja aumenta o contador
      if ((i == bufferTamanho || buffer[i] == '\n' || buffer[i] == ' ') && j == palavraTamanho) {
        cont++;
      }
      
      ++i;
    }
  }

  printf("A palavra %s aparece %d vezes no arquivo\n", palavra, cont);
  fclose(file);
}