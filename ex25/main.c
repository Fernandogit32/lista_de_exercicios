#include <stdio.h>
#include <stdlib.h>



char *strcpy(char* origem,char *destino){
	int i;
	for(i=0;origem[i]!='\0';i++)
		destino[i] = origem[i];

	destino[i] = '\0';

	return destino;

}




int main(int argc, char *argv[]) {

	char origem[50];
	char destino[50];

	printf("\nDigite uma palavra:");
	gets(origem);

	printf("\nDigite a palavra que sera substituida: ");
	gets(destino);

	printf("\n antes: %s",destino);
	printf("\n depois: %s",strcpy(origem,destino));






}
