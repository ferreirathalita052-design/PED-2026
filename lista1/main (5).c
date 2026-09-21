#include <stdio.h>

int main() {
    int a, b, c, maior;
    
    printf("Digite o primriro numero: ");
    scanf("%d" , &a);
    
    printf("Digite o segundo numero: ");
    scanf("%d" , &b);
    
    printf("Digite o terceiro numero: ");
    
    maior = a;
    
    if (b > maior) {
        maior = b;
    }
    
    if (c > maior) {
        maior = c;
        
    }
    
    printf("O maior numero e: %d\n", maior);
    
    return 0;
}
