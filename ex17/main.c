#include <stdio.h>
#include <stdlib.h>

//programas feito em linux

struct pessoa{

       int idade;
       float peso;
    };

    struct pessoa pessoas[20];

int main()
{
    int i=0;
    int idade= 0;
    float peso = 0;
    int i1=0,i2=0,i3=0,i4=0;
    float media1=0,media2=0,media3=0,media4=0;


    for(i=0;i<20;i++){
        printf("digite a idade da pessoa %d : ",i+1);
        scanf("%d",&idade);
        printf("digite o peso da pessoa %d : ",i+1);
        scanf("%f.2",&peso);


        system("cls");

       pessoas[i].idade = idade;
       pessoas[i].idade = peso;

    }

    for(i=0;i<20;i++){

        if( pessoas[i].idade >= 1 &&pessoas[i].idade <=10){
           i1++;
           media1 = (media1+pessoas[i].idade);
        }else if(pessoas[i].idade >10 &&pessoas[i].idade <=20){
            i2++;
            media2 = (media2+pessoas[i].idade);
        }else if(pessoas[i].idade >20 &&pessoas[i].idade <=30){
            i3++;
            media3 = (media3+pessoas[i].idade);
        }else if(pessoas[i].idade >30){
            i4++;
            media4 = (media4+pessoas[i].idade);
        }
          system("cls");

          printf("A madia de peso a faixa etaria de 1 a 10 anos é %.2f \n",media1/i1);
          printf("A madia de peso a faixa etaria de 11 a 20 anos é %.2f \n",media2/i2);
          printf("A madia de peso a faixa etaria de 21 a 30 anos é %.2f \n",media3/i3);
          printf("A madia de peso a faixa etaria de maior de 30 anos é %.2f \n",media4/i4);


    }


    return 0;


}
