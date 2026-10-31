#include <stdio.h>

int main()
{
    int x, y;
    int *p = NULL;
    y = 0;
    p = &y; //p=0x6456 aponta para y
    x = *p; //x=0 recebe o conteudo que p aponta
    x = 4;  //x=4
    (*p)++; //y=1
    --x;    //x=3
    (*p) += x; // y=1+3
    
    printf("%d \n", x);
    printf("%d \n", y);
    printf("%d \n", *p);
    return 0;
}