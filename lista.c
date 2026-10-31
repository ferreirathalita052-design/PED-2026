// lista.c: contém a lógica de cada função.


#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void inicializar(Lista *l) {
    l->cabeca = NULL;
    l->tamanho = 0;
}

void insert(Lista *l, int pos, int valor) {
    // Verifica se a posição é válida
    if (pos < 0 || pos > l->tamanho) {
        printf("Erro: posicao invalida para inserir.\n");
        return;
    }

    // Aloca memória para o novo nó
    No *novo = malloc(sizeof(No));

    if (novo == NULL) {
        printf("Erro: nao foi possivel alocar memoria.\n");
        return;
    }

    novo->valor = valor;
    novo->proximo = NULL;

    // Inserção no início
    if (pos == 0) {
        novo->proximo = l->cabeca;
        l->cabeca = novo;
    } else {
        // Encontra o nó anterior à posição desejada
        No *anterior = l->cabeca;

        for (int i = 0; i < pos - 1; i++) {
            anterior = anterior->proximo;
        }

        // Conecta o novo nó à lista
        novo->proximo = anterior->proximo;
        anterior->proximo = novo;
    }

    l->tamanho++;
}

void show(Lista *l) {
    No *atual = l->cabeca;

    printf("Lista: ");

    while (atual != NULL) {
        printf("%d -> ", atual->valor);
        atual = atual->proximo;
    }

    printf("NULL\n");
}

int acessar(Lista *l, int pos) {
    // Verifica se a posição é válida
    if (pos < 0 || pos >= l->tamanho) {
        printf("Erro: posicao invalida para acessar.\n");
        return -1;
    }

    No *atual = l->cabeca;

    for (int i = 0; i < pos; i++) {
        atual = atual->proximo;
    }

    return atual->valor;
}

void remover(Lista *l, int pos) {
    // Verifica se a posição é válida
    if (pos < 0 || pos >= l->tamanho) {
        printf("Erro: posicao invalida para remover.\n");
        return;
    }

    No *removido;

    // Remoção do primeiro nó
    if (pos == 0) {
        removido = l->cabeca;
        l->cabeca = removido->proximo;
    } else {
        // Encontra o nó anterior ao que será removido
        No *anterior = l->cabeca;

        for (int i = 0; i < pos - 1; i++) {
            anterior = anterior->proximo;
        }

        removido = anterior->proximo;
        anterior->proximo = removido->proximo;
    }

    // Libera a memória do nó removido
    free(removido);

    l->tamanho--;
}

void liberar(Lista *l) {
    No *atual = l->cabeca;

    while (atual != NULL) {
        No *proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }

    l->cabeca = NULL;
    l->tamanho = 0;
}
