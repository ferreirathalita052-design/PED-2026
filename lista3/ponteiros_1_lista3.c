

#include <stdio.h>

int main()
{
    int i = 3, j = 5;
    int *p = NULL;
    int *q = NULL;
    p = &i;
    q = &j;
    
    printf("%p \n", &p);
    printf("%d \n", *p - *q);
    printf("%d \n", *p * *q);
    return 0;
}