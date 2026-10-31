#include <stdio.h>


 // cada entrada é um valor * 3

int sequencia(long long int n) {
    if (n == 1) {
        return 1;
    }   // caso base
    else {
        return 3 * sequencia(n - 1); // passo recursivo
    }
}

int main()
{
    printf("%lld", sequencia(6));
    return 0;
}

// PILHA DE EXECUÇÃO
// sequencia(1) = return 1
// sequencia(2) = return 3 * sequencia(1) == 3*1 = 3
// sequencia(3) = return 3 * sequencia(2) == 3*3 = 9
// sequencia(4) = return 3 * sequencia(3) == 3*9 = 27
// sequencia(5) = return 3 * sequencia(4) == 3*27 = 81
// sequencia(6) = return 3 * sequencia(5) == 3*81 = 243