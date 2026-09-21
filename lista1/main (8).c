#include <stdio.h>

int main() {
    int ano;
    
    printf("Digite um ano: ");
    scanf("%, &ano");
    
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        printf("Ano bissexto.");
    } else {
        printf("Nao e um bissexto.");
    }

    return 0;
}