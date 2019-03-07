#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int i,j,count=0;
    char palavra[20];
    gets (palavra);
    for(i=19;i >=0;i--){
        if(isalpha(palavra[i])){
            if(count==0){
                count=i;
            }
            for(j=i;j<=count;j++){
                if(j < count){
                    printf("%c",palavra[j]);
                }else{
                    printf("%c\n",palavra[j]);
                }
            }

        }
    }
    return 0;
}
