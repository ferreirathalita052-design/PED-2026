#include <stdio.h>

int main() {
    float a, b, c;
    
    printf("Digite o primeiro lado: ");
    scanf("%f", &a);
    
     printf("Digite o segundo lado: ");
    scanf("%f", &b);

    printf("Digite o terceiro lado: ");
    scanf("%f", &c);

    if (a + b > c && a + c > b && b + c > a) {

        if (a == b && b == c) {
            printf("Triangulo equilatero.");
        }
        else if (a == b || a == c || b == c) {
            printf("Triangulo isosceles.");
        }
        
    } else {
        printf("Os lados nao formam um triangulo valido.");
    }

    return 0;
}