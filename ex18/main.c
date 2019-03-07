#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont=0;
    int num=0;

    printf("entre com um numero ");
    scanf("%d",&num);
     if(num>0){
        cont++;

    while(num>=0){
        printf("entre com um numero ");
        scanf("%d",&num);
        if(num>0){
           cont++;
        }

    }

    printf("foram digitados %d numeros positivos ",cont);

}else{
        printf("Nao foi digitado nenhum numero positivo");
}



    return 0;
}
