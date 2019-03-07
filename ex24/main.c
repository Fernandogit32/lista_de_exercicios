#include <stdio.h>
#include <stdlib.h>


int  main(){

	int i;
	char input[20],caracter;
	printf("entre com a string ");
	gets(input);
	printf("entre com o caracter ");
	scanf("%c",&caracter);
	for(i=0;i< strlen(input);i++){
	printf("\n %c-> %d",input[i],&input[i]);
	}

	for(i=0;i< sizeof(input);i++){

		if(input[i]== caracter){
			printf("\n\n A letra: %c esta na posicao: %d",caracter,&input[i]);
			break;
		}

	}

	return 0;
}
