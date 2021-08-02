#include <stdio.h>
#include <string.h>

typedef struct{
    char cor[20];
    char tamanho;
    char nome[50];
}listagem;

int main(){

    int entrada = 0;
    int brek = 1; 
    int iMenor = 0;

    while (brek != 0)
    {
        scanf("%d", &entrada);
        listagem farda[entrada];
        if (entrada == 0)
        {
            brek = 0;
        }else{
            for (int i = 0; i < entrada; i++){
                    
            scanf(" %49[^\n]", farda[i].nome);
            scanf(" %s %c", farda[i].cor, &farda[i].tamanho);
            }

            for(int j=0; j < entrada-1; j++) {
                iMenor = j;
                for(int i = j+1; i<entrada; i++){
                
                if(strcmp(farda[i].nome, farda[iMenor].nome) < 0 )
                {    
                    iMenor = i;
                }   
                } 
                if(iMenor != j) {
                listagem temp = farda[j];
                farda[j] = farda[iMenor];
                farda[iMenor] = temp; 
            }
            }
            for(int j = 0; j< entrada-1; j++) {
                iMenor = j;
                for(int i = j+1; i<entrada; i++){
                    
                    if(farda[i].tamanho > farda[iMenor].tamanho)
                    {    
                    iMenor = i;
                    }   
                } 
                if(iMenor!=j) {
                    listagem temp = farda[j];
                    farda[j] = farda[iMenor];
                    farda[iMenor] = temp;
                }
            }

            for (int j = 0; j < entrada - 1; j++)
            {
                iMenor = j;
                for (int i = j+1 ; i < entrada; i++)
                {
                    if (strcmp(farda[i].cor,farda[iMenor].cor) < 0)
                    {
                        iMenor = i;
                    }   
                }
                if (iMenor != j)
                {
                    listagem temp = farda[j];
                    farda[j] = farda[iMenor];
                    farda[iMenor] = temp;
                }
            }
            for (int j = 0; j < entrada - 1; j++)
            {
                iMenor = j;
                for (int i = j+1; i < entrada; i++)
                {
                    if (strcmp(farda[i].cor, farda[iMenor].cor) == 0 && farda[i].tamanho == farda[iMenor].tamanho && strcmp(farda[i].nome, farda[iMenor].nome) < 0 )
                    {
                        iMenor = i;
                    }
                    
                }
                if (iMenor != j)
                {
                    listagem temp = farda[j];
                    farda[j] = farda[iMenor];
                    farda[iMenor] = temp;
                }
                
            }
            for (int i = 0; i < entrada; i++)
            {
            printf("%s %c %s\n", farda[i].cor, farda[i].tamanho, farda[i].nome);
            }
        }    
        printf("\n");
    }
    
    return 0;

} 
