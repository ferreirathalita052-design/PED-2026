/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int idade;
    
    printf("Digite a idade: ");
    scanf("%", &idade);
    
    if (idade >= 0 && idade <= 11) {
        printf("Crianca\n");
    } else if (idade <= 17) {
        printf("Adolecente\n");
    } else if (idade <= 59) {
        printf("Adulto\n");
    } else {
        
    }
    return 0;
}