#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i = 0;
    int num=0;
    int vet[15];

    for(i=0;i<15;i++){
      printf("\nDigite o numero ");
      scanf("%d",&num);
      vet[i]=num;
    }
for(i=0;i<15;i++)printf("\n A raiz quadrada de %d e %.2f",vet[i],(float)sqrt(vet[i]));
}
