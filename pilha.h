
#ifndef PILHA_H
#define PILHA_H

typedef struct no {
    char dado;
    struct no *prox;
} No;

typedef struct {
    No *topo;
} Pilha;

void pilha_inicializa(Pilha *p);
int pilha_vazia(Pilha *p);
void pilha_push(Pilha *p, char valor);
char pilha_pop(Pilha *p);
void pilha_libera(Pilha *p);

#endif
