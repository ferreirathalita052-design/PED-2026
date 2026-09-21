#include <stdio.h>

void organizar(int *x, int *y) {
    int temp;

    if (*x < *y) {
        temp = *x;
        *x = *y;
        *y = temp;
    }
}

int main() {
    int x, y;

    printf("Digite o primeiro valor: ");
    scanf("%d", &x);

    printf("Digite o segundo valor: ");
    scanf("%d", &y);

    organizar(&x, &y);

    printf("Maior = %d\n", x);
    printf("Menor = %d\n", y);

    return 0;
}