#include <stdio.h>
#include <stdlib.h>

int main()
{
    char frase [200];
    int i = 0;

    printf("Entre com uma frase: ");
    gets (frase);

    for(i=0;i<strlen(frase);i++){

      switch (frase[i])
{
   case 'a':
    frase[i] = 'x';
   break;

   case 'e':
    frase[i] = 'y';
   break;

   case 'i':
    frase[i] = 'w';
   break;

   case 'o':
   frase[i] = 'k';
   break;

   case 'u':
   frase[i] = 'z';
   break;


}
    }

    printf("frase criptografada ficou: %s ",frase);

    return 0;
}
