#include <stdio.h>

long fatorial(int n) {
    long resultado = 1; 

    for (int i = 1; i <= n; i++) {
        resultado = resultado * i;
    }
    return resultado;
}

int main() {
    int n;
    printf("Digite um numero: \n");
    scanf("%d", &n);

    long resultado = fatorial(n);
    printf("O fatorial de %d e: %ld\n", n, resultado);

    return 0;
}