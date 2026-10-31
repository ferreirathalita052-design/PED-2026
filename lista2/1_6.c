#include <stdio.h>

void intervalo(int a, int b) {
    if (a == b) {
        printf("%d", a); // caso base
    }
    else {
        printf("%d,", a);
        intervalo(a + 1, b); // ponto recursivo
    }
}

int main() {
    int a = 5;
    int b = 10;
    intervalo(a, b);
    return 0;
}

// PILHA DE EXECUÇÃO
// intervalo(5,10) - return 5 - chama intervalo(6,10)
// intervalo(6,10) - return 6 - chama intervalo(7,10)
// intervalo(7,10) - return 7 - chama intervalo(8,10)
// intervalo(8,10) - return 8 - chama intervalo(9,10)
// intervalo(9,10) - return 9 - chama intervalo(10,10)
// intervalo(10,10) - return 10 → CASO BASE