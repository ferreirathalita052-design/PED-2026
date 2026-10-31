// lista.h: informa quais são os tipos e as funções disponíveis.

#ifndef LISTA_H
#define LISTA_H

typedef struct No {
    int valor;
    struct No *proximo;
} No;

typedef struct {
    No *cabeca;
    int tamanho;
} Lista;

void inicializar(Lista *l);
void insert(Lista *l, int pos, int valor);
void show(Lista *l);
int acessar(Lista *l, int pos);
void remover(Lista *l, int pos);
void liberar(Lista *l);

#endif
