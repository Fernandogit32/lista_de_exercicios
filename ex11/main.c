#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i=0;
    int valor=0;
    int maior=0;
    for(i=0;i<5;i++){
        printf("Entre com um valor ");
        scanf("%d",&valor);
        if(valor>maior){
            maior=valor;
        }
    }
     printf("O maior valor digitado  foi %d", maior);



    return 0;
}
