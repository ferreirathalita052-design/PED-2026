#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operador;
    
    printf("Digite o orimeiro numero: ");
    scanf("%", &num1);
    
    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch (operador) {

        case '+':
            resultado = num1 + num2;
            printf("%.2f", resultado);
            break;

        case '-':
            resultado = num1 - num2;
            printf("%.2f", resultado);
            break;

        case '*':
        resultado = num1 * num2;
            printf("%.2f", resultado);
            break;

        case '/':
            if (num2 == 0) {
                printf("Divisao por zero nao permitida.");
            } else {
                resultado = num1 / num2;
                printf("%.2f", resultado);
            }
            break;

        default:
            printf("Operacao invalida.");
    }
    
    return 0;
}
