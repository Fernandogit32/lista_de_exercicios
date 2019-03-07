#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtd = 0;
    int i =0;
    int valor=0;
    int maior=0;
    int menor=0;
    printf("Entre com a quantidade de numeroas que serao digitados ");
    scanf("%d",&qtd);

    for(i=0;i<qtd;i++){
        printf("Entre com um valor ");
        scanf("%d",&valor);
        if(valor>maior){
            maior=valor;
        }
        if(i==0){
            menor= valor;
        }
        if(valor<menor){
             menor= valor;
        }





    }
     printf("O maior valor digitado  foi %d \n", maior);
     printf("O menor valor digitado  foi %d", menor);

    return 0;
}
