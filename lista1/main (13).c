#include <stdio.h>

int main() {
    int N, numero, soma = 0;
    
    printf("Digite a quatidade de numeros: ");
    scanf("%d", &N);
    
    
    for(int i = 1; i <= N; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);
    
        soma += numero;
    }
    
    printf("Soma total: %d\n", soma);

    return 0;
}