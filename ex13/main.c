#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int vet[20];
    int valor;

    for(i=0;i<20;i++){
        printf("Entre com o numero ");
        scanf("%d",&valor);
        vet[i]=valor;
    }
    system("cls");
    printf("\n resultados dos numeros digitados ao quadrado menores que 225");
    for(i=0;i<20;i++){

       if(vet[i]*vet[i]<225){
            printf("\n %d",vet[i]*vet[i]);

       }
    }


    return 0;
}
