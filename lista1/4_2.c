#include <stdio.h>

void maior (int a, int b, int c) {
    int maiorValor = a;
    
    if (b > maiorValor) {
        maiorValor = b;
    }
    if (c > maiorValor) {
        maiorValor = c;
    }
    printf("O maior valor e: %d \n", maiorValor);
}

int main() {
    int x, y, z;

    printf("Digite tres valores inteiros: \n");
    scanf("%d %d %d", &x, &y, &z);

    maior(x, y, z); 
    return 0;
}