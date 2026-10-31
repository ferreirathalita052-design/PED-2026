#include <stdio.h>

void dec2bin(int n) {
    if (n == 0) {
        return; //caso base
    }   
    else {
        dec2bin(n / 2);
        printf("%d", n % 2);
        // passo recursivo
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    dec2bin(n);
    return 0;
}

// PILHA DE EXECUÇÃO
// dec2bin(13) = return 13 % 2 = 6, sobra 1
// dec2bin(6) = return 6 % 2 = 3, sobra 0
// dec2bin(3) = return 3 % 2 = 1, sobra 1
// dec2bin(1) = return 1 % 2 = 1, sobra 1
// dec2bin(0) = return