#include <stdio.h>

//entrada: 987654 saida: 6

int contaDigito(int n) {
    if (n < 10) {
        return 1;
    }
    else {
        return 1 + contaDigito (n/10);
    }
}

int main()
{
    int n = 987654;
    printf("%d", contaDigito(n));
    return 0;
}

// PILHA DE EXECUÇÃO
// contaDigito(9) = return 1
// contaDigito(98) = return 1+1 = 2
// contaDigito(987) = return 1+2 = 3 
// contaDigito(9876) = return 1+3 = 4 
// contaDigito(98765) = return 1+4 = 5
// contaDigito(987654) = return 1+5 = 6