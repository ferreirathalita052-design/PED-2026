
#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void pilha_inicializa(Pilha *p) {
    p->topo = NULL;
}

int pilha_vazia(Pilha *p) {
    return p->topo == NULL;
}

void pilha_push(Pilha *p, char valor) {
    No *novo = malloc(sizeof(No));

    if (novo == NULL) {
        printf("Erro de memoria.\n");
        exit(1);
    }

    novo->dado = valor;
    novo->prox = p->topo;
    p->topo = novo;
}

char pilha_pop(Pilha *p) {
    if (pilha_vazia(p)) {
        printf("Erro: pilha vazia.\n");
        exit(1);
    }

    No *removido = p->topo;
    char valor = removido->dado;

    p->topo = removido->prox;
    free(removido);

    return valor;
}

void pilha_libera(Pilha *p) {
    while (!pilha_vazia(p)) {
        pilha_pop(p);
    }
}
