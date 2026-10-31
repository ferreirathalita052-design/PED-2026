
#include <stdio.h>
#include <string.h>
#include "pilha.h"

/*
Escolha da estrutura: lista encadeada.
A pilha pode crescer conforme a expressao, sem
precisar definir um tamanho fixo para um array.
*/

int combina(char abertura, char fechamento) {
    return (abertura == '(' && fechamento == ')') ||
           (abertura == '[' && fechamento == ']') ||
           (abertura == '{' && fechamento == '}');
}

int balanceada(char expressao[]) {
    Pilha p;
    pilha_inicializa(&p);

    for (int i = 0; expressao[i] != '\0'; i++) {
        char c = expressao[i];

        if (c == '(' || c == '[' || c == '{') {
            pilha_push(&p, c);
        }
        else if (c == ')' || c == ']' || c == '}') {

            // Sempre verificar antes de chamar pop.
            if (pilha_vazia(&p)) {
                pilha_libera(&p);
                return 0;
            }

            char abertura = pilha_pop(&p);

            if (!combina(abertura, c)) {
                pilha_libera(&p);
                return 0;
            }
        }
    }

    // Se sobrou alguma abertura, nao esta balanceada.
    int resultado = pilha_vazia(&p);
    pilha_libera(&p);

    return resultado;
}

int main(void) {
    char expressao[1000];

    printf("Digite uma expressao: ");

    if (fgets(expressao, sizeof(expressao), stdin) == NULL) {
        return 1;
    }

    // Remove a quebra de linha do fgets, se existir.
    expressao[strcspn(expressao, "\n")] = '\0';

    if (balanceada(expressao)) {
        printf("Expressao balanceada.\n");
    } else {
        printf("Expressao nao balanceada.\n");
    }

    return 0;
}
