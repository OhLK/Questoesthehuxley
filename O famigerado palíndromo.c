#include <stdio.h>
#include <string.h>

int main(void)
{
    char palin[83]={0};
    int tamanho;
    char flag_palin = 1;

    scanf(" %s", palin);
    tamanho = strlen(palin);

    for(int j=0; j< tamanho/2; j++)
    {
        if(palin[j] != palin[tamanho-j-1])
            flag_palin = 0;
    }
    if(flag_palin){
        printf("S");
    }
    else
    {
        printf("N");
    }
}
