/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;
    
    printf("Digite a primeira nota: ");
    scanf("%f , &nota1");
    
    printf("Digite a segunda nota: ");
    scanf("%f, &nota2");
    
    printf("Digite a terceira nota: ");
    scanf("%f, &nota3");

    media = (nota1 + nota2 + nota3);
    
    printf(" A media dos numeros e: %f/n, media");
    
    return 0;
}