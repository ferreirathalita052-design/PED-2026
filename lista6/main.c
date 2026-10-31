
#include <stdio.h>
#include "fila.h"

/*
Escolha da estrutura: lista encadeada.
Ela permite inserir e remover criancas sem definir
uma capacidade fixa para a fila.
*/

int main(void) {
    int N, K;

    printf("Quantidade de criancas (N): ");
    if (scanf("%d", &N) != 1 || N < 1) {
        printf("Informe um N valido (maior que zero).\n");
        return 1;
    }

    printf("Valor de K: ");
    if (scanf("%d", &K) != 1 || K < 1) {
        printf("Informe um K valido (maior que zero).\n");
        return 1;
    }

    Fila fila;
    fila_inicializa(&fila);

    // Coloca as criancas de 1 ate N na fila.
    for (int i = 1; i <= N; i++) {
        fila_enfileira(&fila, i);
    }

    printf("\nOrdem de eliminacao: ");

    // Continua ate sobrar uma crianca.
    while (fila.frente != fila.fundo) {

        // A batata passa por K - 1 criancas.
        for (int i = 1; i < K; i++) {
            int crianca = fila_desenfileira(&fila);
            fila_enfileira(&fila, crianca);
        }

        // A proxima crianca e eliminada.
        int eliminada = fila_desenfileira(&fila);
        printf("%d ", eliminada);
    }

    // A ultima crianca e a vencedora.
    int vencedora = fila_desenfileira(&fila);

    printf("\nVencedora: crianca %d\n", vencedora);

    fila_libera(&fila);

    return 0;
}
