#include <stdio.h>

int maior (int a, int b, int c) {
    int maiorValor = a;
    
    if (b > maiorValor) {
        maiorValor = b;
    }
    if (c > maiorValor) {
        maiorValor = c;
    }
    return maiorValor;
}

int main() {
    int x, y, z;

    printf("Digite tres valores inteiros: \n");
    scanf("%d %d %d", &x, &y, &z);

    int resultado = maior(x, y, z); 
    printf("O maior valor e: %d \n", resultado);

    return 0;
}