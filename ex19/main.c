#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int num =0;

    do{
    printf("\e[H\e[2J");//comando para limpar tela
    printf("Voce entrou com %d entre 100 e 200 \n",i);
    printf("Entre com o valor ");
    scanf("%d",&num);
    if(num>=100&&num<=200){
    i++;
    }

    }while(num!=0);


    return 0;
}
