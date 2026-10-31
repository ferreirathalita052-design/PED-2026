#include <stdio.h>

void filtra_positivos(int vetor[], int tamanho, int resultado[], int *quantidade) {
    int i;
    int j = 0;

    for (i = 0; i < tamanho; i++) {
        if (vetor[i] > 0) {
            resultado[j] = vetor[i];
            j++;
        }
    }
    *quantidade = j;
}

int main() {
    int vetor[] = {-5, 10, -3, 7, 0, -8, 15};
    int tamanho = 7;

    int resultado[7];
    int quantidade;

    filtra_positivos(vetor, tamanho, resultado, &quantidade);
    printf("Valores positivos:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("%d ", resultado[i]);
    }

    return 0;
}