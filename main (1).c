/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int segundos, horas, minutos, resto;
    
    printf("Digite a quantidade de segundos");
    scanf("%d" , &segundos);

    horas = segundos / 3600;
    
    resto = segundos %60;
    
    minutos = resto / 60;
    
    segundos = resto % 60;
    
    printf("%dh %dmin %ds\n", horas, minutos, segundos);
    
    return 0;
}
