#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i = 0;
    int num=0;
    int vet[10];
    for(i=0;i<10;i++){
      printf("\nDigite o numero ");
      scanf("%d",&num);
      vet[i]=num;
    }

    for(i=0;i<10;i++)printf("\n O numero ao quadrado de %d e %.2f",vet[i],(float)vet[i]*2);
}
