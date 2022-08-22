// Algumas constantes �teis
#define ERRO_PILHA_VAZIA -1
#define ERRO_PILHA_CHEIA -2

typedef struct{
   int *dados;		// dados da pilha 
   int topo1, topo2;    // indica o �ndice do topo
   int capacidade;   // capacidade do vetor alocado
   int ocupado;      // quanto foi ocupado da pilha
} PilhaDupla;

void inicializa_pilhas ( PilhaDupla *p, int c );
int pilha1_vazia ( PilhaDupla p );
int pilha2_vazia ( PilhaDupla p );
int pilhas_cheias ( PilhaDupla p );
int empilha1 ( PilhaDupla *p, int info );
int empilha2 ( PilhaDupla *p, int info );
int desempilha1 ( PilhaDupla *p, char *info );
int desempilha2 ( PilhaDupla *p, char *info );


