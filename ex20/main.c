#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i=0;
    float valor=0;
    float valores[10];

for(i=0;i<10;i++){

    printf("Entre com o valor para calcular a raiz quadrada ");
    scanf("%f",&valor);
    printf("\e[H\e[2J");//comando para limpar tela
    while(valor<0){
        printf("\e[H\e[2J");//comando para limpar tela
        printf("Digite novamente o valor numeros negativos não são validos ");
        scanf("%f",&valor);

        }
        valores[i]=valor;
        printf("raiz quadrada de %.2f é %f \n",valores[i],sqrt(valores[i]));
    }

printf("\e[H\e[2J");//comando para limpar tela

for(i=0;i<10;i++){
    printf("A raiz quadrada de %.2f é %f \n",valores[i],sqrt(valores[i]));
    }


    return 0;
}
