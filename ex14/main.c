#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[100];
    int i=0;
    printf("Entre com seu nome!\n");
    scanf("%s",&nome);

    printf("seu nome tem %d \n \n",strlen(nome));
     for(i=0;i<strlen(nome);i++){
        printf("\n %s",nome);
     }


    return 0;
}
