#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"

#define CAPACIDADE_INICIAL 4

Vetor *vetor_criar(void) {
    Vetor *v = (Vetor *) malloc(sizeof(Vetor));
    if (v == NULL) {
        printf("Erro ao alocar Vetor\n");
        exit(1);
    }
    v->dados = (int *) malloc(CAPACIDADE_INICIAL * sizeof(int));
    if (v->dados == NULL) {
        printf("Erro ao alocar dados do Vetor\n");
        exit(1);
    }
    v->tamanho_alocado = CAPACIDADE_INICIAL;
    v->tamanho_ocupado = 0;
    return v;
}

void append(Vetor *v, int valor) {
    if (v->tamanho_ocupado >= v->tamanho_alocado) {
        int nova_capacidade = v->tamanho_alocado * 2;
        int *novo_bloco = (int *) realloc(v->dados, nova_capacidade * sizeof(int));
        if (novo_bloco == NULL) {
            printf("Erro ao realocar memoria em append\n");
            exit(1);
        }
        v->dados = novo_bloco;
        v->tamanho_alocado = nova_capacidade;
    }
    v->dados[v->tamanho_ocupado] = valor;
    v->tamanho_ocupado++;
}

void show(Vetor *v) {
    printf("[");
    for (int i = 0; i < v->tamanho_ocupado; i++) {
        printf("%d", v->dados[i]);
        if (i < v->tamanho_ocupado - 1) {
            printf(", ");
        }
    }
    printf("]  (ocupado: %d / alocado: %d)\n", v->tamanho_ocupado, v->tamanho_alocado);
}

Vetor *slice(Vetor *v, int x0, int x1) {
    if (x0 < 0 || x1 >= v->tamanho_ocupado || x0 > x1) {
        printf("Intervalo invalido em slice\n");
        exit(1);
    }
    int quantidade = x1 - x0 + 1;
    Vetor *novo = (Vetor *) malloc(sizeof(Vetor));
    if (novo == NULL) {
        printf("Erro ao alocar Vetor em slice\n");
        exit(1);
    }
    novo->dados = (int *) malloc(quantidade * sizeof(int));
    if (novo->dados == NULL) {
        printf("Erro ao alocar dados em slice\n");
        exit(1);
    }
    for (int i = 0; i < quantidade; i++) {
        novo->dados[i] = v->dados[x0 + i];
    }

    novo->tamanho_alocado = quantidade;
    novo->tamanho_ocupado = quantidade;
    return novo;
}

void pop(Vetor *v) {
    if (v->tamanho_ocupado == 0) 
        printf("Erro: vetor vazio em pop\n");
    else
        v->tamanho_ocupado--;
}

void vetor_destruir(Vetor *v) {
    if (v != NULL) {
        free(v->dados);
        free(v);
    }
}