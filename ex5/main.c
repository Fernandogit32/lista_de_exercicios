#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    int soma=0;

    for(i=1;i<=100;i++){
        printf("\n%d",i);
        soma=soma+i;
    }
    printf("\n o resultado da soma e %d",soma);
    return 0;
}
