#include <stdio.h>
#include <stdlib.h>
#include "PilhaDupla.h"

void inicializa_pilhas ( PilhaDupla *p, int c ){
	p->dados = malloc( sizeof(int) * c );
	p->capacidade = c;
	p->topo1 = -1;
	p->topo2 = c;
	p->ocupado = 0;
}

int pilha1_vazia ( PilhaDupla p ) {
	return p.topo1 == -1;
}

int pilha2_vazia ( PilhaDupla p ) {
	return p.topo2 == p.capacidade;
}

int pilhas_cheias ( PilhaDupla p ) {
	return 	p.ocupado == p.capacidade;
}

int empilha1 ( PilhaDupla *p, int info ) {
	if( pilhas_cheias ( *p ) )
		return ERRO_PILHA_CHEIA;

	p->topo1++;
	p->ocupado++;
	p->dados[p->topo1] = info;
	return 1; // Sucesso
}

int empilha2 ( PilhaDupla *p, int info ) {
	if( pilhas_cheias ( *p ) )
		return ERRO_PILHA_CHEIA;

	p->topo2--;
	p->ocupado++;
	p->dados[p->topo2] = info;
	return 1; // Sucesso
}

int desempilha1 ( PilhaDupla *p, char *info ) {
	if ( pilha1_vazia ( *p ) )
		return ERRO_PILHA_VAZIA;

	*info = p->dados[p->topo1];
	p->topo1--;
	p->ocupado--;
	return 1; // Sucesso
}

int desempilha2 ( PilhaDupla *p, char *info ) {
	if ( pilha2_vazia ( *p ) )
		return ERRO_PILHA_VAZIA;

	*info = p->dados[p->topo2];
	p->ocupado--;
	return 1; // Sucesso
}

