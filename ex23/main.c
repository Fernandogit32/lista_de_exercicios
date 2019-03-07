#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(int argc, char *argv[]) {

	char frase1[50];
	char frase2[50];
	int cont= 0;
	int i =0;
	int j=0;
	int k =0;
	printf("Entre com a primeira texto : ");
	gets(frase1);
	printf("Entre com a primeira texto : ");
	gets(frase2);




	printf(" %c %d\n",frase1[0],&frase1[0]);
	printf(" %c %d\n",frase1[1],&frase1[1]);
	printf(" %c %d\n",frase1[2],&frase1[2]);
	printf(" %c %d\n",frase1[3],&frase1[3]);
	printf(" %c %d\n\n\n",frase1[4],&frase1[4]);


	printf(" %c %d\n",frase2[0],&frase2[0]);
	printf(" %c %d\n",frase2[1],&frase2[1]);
	printf(" %c %d\n",frase2[2],&frase2[2]);
	printf(" %c %d\n",frase2[3],&frase2[3]);
	printf(" %c %d\n",frase2[4],&frase2[4]);



	printf("%d",strlen(frase2));
	while(frase1[i] != '\0'){


		if(frase1[i] == frase2[0])
		{
			for(j=0,k=i;j<=strlen(frase2)-1;j++,k++)
			{
				if(frase1[k] == frase2[j])
				{
					cont = cont + 1;
					if (cont == strlen(frase2))
					{
						printf("\n\n seu endereco e: %d",&frase1[k]-cont+1);
						break;
					}
				}
			}

		}
		if (cont == strlen(frase2))
		break;
		cont=0;
		i++;
	}
}






