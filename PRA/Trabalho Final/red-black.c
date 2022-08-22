#include <stdlib.h>
#include <stdio.h>
#include "util.h"

int count = 0;
enum coloracao { Vermelho, Preto };
typedef enum coloracao Cor;

typedef struct no {
  struct no* pai;
  struct no* esquerda;
  struct no* direita;
  Cor cor;
  int valor;
} No;

typedef struct arvore {
  struct no* raiz;
  struct no* nulo; 
} Arvore;

No* criarNo(Arvore*, No*, int);
void balancear(Arvore*, No*);
void rotacionarEsquerda(Arvore*, No*);
void rotacionarDireita(Arvore*, No*);

Arvore* criar();
int vazia(Arvore*);
No* adicionar(Arvore*, int);
No* localizar(Arvore* arvore, int valor);

Arvore* criar() {
  Arvore *arvore = malloc(sizeof(Arvore));
  arvore->nulo = NULL;
  arvore->raiz = NULL;

  arvore->nulo = criarNo(arvore, NULL, 0);
  arvore->nulo->cor = Preto;

  return arvore;
}

int vazia(Arvore* arvore) {
  count++;
  return arvore->raiz == NULL;
}

No* criarNo(Arvore* arvore, No* pai, int valor) {
  count++;
  No* no = malloc(sizeof(No));

  no->pai = pai;    
  no->valor = valor;
  no->direita = arvore->nulo;
  no->esquerda = arvore->nulo;

  return no;
}

No* adicionarNo(Arvore* arvore, No* no, int valor) {
  count++;
  if (valor > no->valor) {
    if (no->direita == arvore->nulo) {
        no->direita = criarNo(arvore, no, valor);     
      no->direita->cor = Vermelho;       
      
      return no->direita;
    } else {
      return adicionarNo(arvore, no->direita, valor);
    }
  } else {
    if (no->esquerda == arvore->nulo) {
      no->esquerda = criarNo(arvore, no, valor);
      no->esquerda->cor = Vermelho;
      
      return no->esquerda;
    } else {
      return adicionarNo(arvore, no->esquerda, valor);
    }
  }
}

No* adicionar(Arvore* arvore, int valor) {
  count++;
  if (vazia(arvore)) {
    arvore->raiz = criarNo(arvore, arvore->nulo, valor);
    arvore->raiz->cor = Preto;
      
    return arvore->raiz;
  } else {
    No* no = adicionarNo(arvore, arvore->raiz, valor);
    balancear(arvore, no);
    
    return no;
  }
}

No* localizar(Arvore* arvore, int valor) {
  if (!vazia(arvore)) {
    No* no = arvore->raiz;

    while (no != arvore->nulo) {
      count++;
      if (no->valor == valor) {
        return no;
      } else {
        no = valor < no->valor ? no->esquerda : no->direita;
      }
    }
  }

  return NULL;
}

void percorrerProfundidadeInOrder(Arvore* arvore, No* no, void (*callback)(int)) {
  if (no != arvore->nulo) {
    percorrerProfundidadeInOrder(arvore, no->esquerda,callback);
    callback(no->valor);
    percorrerProfundidadeInOrder(arvore, no->direita,callback);
  }
}

void percorrerProfundidadePreOrder(Arvore* arvore, No* no, void (*callback)(int)) {
    if (no != arvore->nulo) {
      callback(no->valor);
      percorrerProfundidadePreOrder(arvore, no->esquerda,callback);
      percorrerProfundidadePreOrder(arvore, no->direita,callback);
    }
}

void percorrerProfundidadePosOrder(Arvore* arvore, No* no, void (callback)(int)) {
    if (no != arvore->nulo) {
      percorrerProfundidadePosOrder(arvore, no->esquerda,callback);
      percorrerProfundidadePosOrder(arvore, no->direita,callback);
      callback(no->valor);
    }
}

void visitar(int valor){
  printf("%d ", valor);
}

void balancear(Arvore* arvore, No* no) {
  while (no->pai->cor == Vermelho) {
    count++;
    if (no->pai == no->pai->pai->esquerda) {
      No *tio = no->pai->pai->direita;
      
      if (tio->cor == Vermelho) {
        tio->cor = Preto; //Caso 1
        no->pai->cor = Preto; 

        no->pai->pai->cor = Vermelho; //Caso 1
        no = no->pai->pai; //Caso 1
      } else {
        if (no == no->pai->direita) {
          no = no->pai; //Caso 2
          rotacionarEsquerda(arvore, no); //Caso 2
        } else {
          no->pai->cor = Preto; 
          no->pai->pai->cor = Vermelho; //Caso 3
          rotacionarDireita(arvore, no->pai->pai); //Caso 3
        }
      }
    } else {
      No *tio = no->pai->pai->esquerda;
      
      if (tio->cor == Vermelho) {
        tio->cor = Preto; //Caso 1
        no->pai->cor = Preto; 

        no->pai->pai->cor = Vermelho; //Caso 1
        no = no->pai->pai; //Caso 1
      } else {
        if (no == no->pai->esquerda) {
          no = no->pai; //Caso 2
          rotacionarDireita(arvore, no); //Caso 2
        } else {
          no->pai->cor = Preto; 
          no->pai->pai->cor = Vermelho; //Caso 3
          rotacionarEsquerda(arvore, no->pai->pai); //Caso 3
        }
      }
    }
  }
  arvore->raiz->cor = Preto; //Conserta possível quebra regra 2
}

void rotacionarEsquerda(Arvore* arvore, No* no) {
  count++;
  No* direita = no->direita;
  no->direita = direita->esquerda; 

  if (direita->esquerda != arvore->nulo) {
    direita->esquerda->pai = no;
  }

  direita->pai = no->pai;
  
  if (no->pai == arvore->nulo) {
    arvore->raiz = direita;
  } else if (no == no->pai->esquerda) {
    no->pai->esquerda = direita;
  } else {
    no->pai->direita = direita;
  }

  direita->esquerda = no;
  no->pai = direita;
}

void rotacionarDireita(Arvore* arvore, No* no) {
  count++;
  No* esquerda = no->esquerda;
  no->esquerda = esquerda->direita;
  
  if (esquerda->direita != arvore->nulo) {
    esquerda->direita->pai = no;
  }
  
  esquerda->pai = no->pai;
  
  if (no->pai == arvore->nulo) {
    arvore->raiz = esquerda;
  } else if (no == no->pai->esquerda) {
    no->pai->esquerda = esquerda;
  } else {
    no->pai->direita = esquerda;
  }
  
  esquerda->direita = no;
  no->pai = esquerda;
}

int main() {
  int size = 10, sum = 0;
  for(int i = 1; i <= 1000; i++) { // quantidade de chaves
    //Caso médio 
    while(size > 0) { // quantidade para media
      Arvore* a = criar();
      count = 0;
      int * values = generateRandomArray(i);
      for(int j = 0; j < i; j++) {
        adicionar(a, values[j]);
      }
      sum += count; 
      size--;
      free(values);
      free(a);
    }
    size = 10;
    float result = sum / 10;
    sum = 0;
    printf("RB;%d;%.0f\n", i, result);
  }
  // for (int i = 1; i <= 1000; i++) {
  //   Arvore* a = criar();
  //   count = 0;
  //   int *values = generateOrderedArrayDescending(i);
  //   for(int j = 0; j < i; j++) {
  //     adicionar(a, values[j]);
  //   }
  //   // free(values);
  //   // free(a);
  //   printf("RB;%d;%d\n", i, count);
  // }
}