#include <stdio.h>

int main() {
    int numero, primo = 1;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    if (numero <= 1) {
        primo = 0;
    } else {
        for (int i = 2; i < numero; i++) {
            if(numero % i == 0) {
                primo = 0;
                break;
            }
        }
    }
    
    if(primo == 1) {
        printf(" O numero e primo.\n");
    }

    return 0;
}
