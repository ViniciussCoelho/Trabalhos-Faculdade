typedef struct {
    int m;
    int n;
    int vet[10][10];
} Matriz;

void inicia_matriz(Matriz *p, int x, int y);
void modifica_valor(Matriz *p, int x, int y, int valor);
void le_valor(Matriz *p, int x, int y);
void compara_matriz(Matriz *p, Matriz *d);
void soma_matriz(Matriz *p, Matriz *d);
void mult_matriz(Matriz *p, Matriz *d);
void mostra_matriz(Matriz *p);

