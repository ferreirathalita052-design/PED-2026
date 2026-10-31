
#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void fila_inicializa(Fila *f) {
    f->frente = NULL;
    f->fundo = NULL;
}

int fila_vazia(Fila *f) {
    return f->frente == NULL;
}

void fila_enfileira(Fila *f, int valor) {
    No *novo = malloc(sizeof(No));

    if (novo == NULL) {
        printf("Erro de memoria.\n");
        exit(1);
    }

    novo->dado = valor;
    novo->prox = NULL;

    if (fila_vazia(f)) {
        f->frente = novo;
        f->fundo = novo;
    } else {
        f->fundo->prox = novo;
        f->fundo = novo;
    }
}

int fila_desenfileira(Fila *f) {
    if (fila_vazia(f)) {
        printf("Erro: fila vazia.\n");
        exit(1);
    }

    No *removido = f->frente;
    int valor = removido->dado;

    f->frente = removido->prox;

    if (f->frente == NULL) {
        f->fundo = NULL;
    }

    free(removido);

    return valor;
}

void fila_libera(Fila *f) {
    while (!fila_vazia(f)) {
        fila_desenfileira(f);
    }
}
