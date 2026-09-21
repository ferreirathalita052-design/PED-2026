#include <stdio.h>

int main() {
    int N, quantidade = 0;
    
    printf("Digite N: ");
    scanf("%d", &N);
    
    for(int i = 1; i <= N; i++) {
        if(i % 2 == 0) {
            quantidade++;
        }
    }
    
    printf("Quantidade de pares: %d\n", quantidade);
    
    return 0;
}
