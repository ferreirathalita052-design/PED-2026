
#ifndef FILA_H
#define FILA_H

typedef struct no {
    int dado;
    struct no *prox;
} No;

typedef struct {
    No *frente;
    No *fundo;
} Fila;

void fila_inicializa(Fila *f);
int fila_vazia(Fila *f);
void fila_enfileira(Fila *f, int valor);
int fila_desenfileira(Fila *f);
void fila_libera(Fila *f);

#endif
