#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main (void) {

    char ana1[500] = {0};
    char ana2[500] = {0};
    int j = 0, tamanho = 0, tamanho2 = 0, k = 0;
    int cont1 = 0, LK = 0, maior = 0;
    int Ntamanho2 = 0, Ntamanho = 0, zezinho = 0, zezinho2 = 0, zezinho3 = 0;
    
    scanf(" %499[^\n]", ana1);
    scanf(" %499[^\n]", ana2);
    
    tamanho = strlen(ana1);
    tamanho2 = strlen(ana2);
    
    for (int i = 0; i < tamanho; i++)
    {
        ana1[i] = tolower(ana1[i]);
    }
    for (int m = 0; m < tamanho2; m++)
    {
        ana2[m] = tolower(ana2[m]);
    }
    
    
    for ( k = 0; k < tamanho; k++)
    {
        if(ana1[k] == '.'){
            ana1[k] = 0;
            zezinho++;
        
        }else if (ana1[k] == '!')
        {
            ana1[k] = 0;
            zezinho++;
        }else if (ana1[k] == ',')
        {
            ana1[k] = 0;
            zezinho++;
        }else if (ana1[k] == '?')
        {
            ana1[k] = 0;
            zezinho++;
        }else if (ana1[k] == ' ')
        {
            ana1[k] = 0;
            zezinho++; 
       
        
        }
        } 
        for ( LK = 0; LK < tamanho2; LK++)
        {
        if(ana2[LK] == '.'){
            ana2[LK] = 0;
            zezinho2++;
        
        }else if (ana2[LK] == '!')
        {
            ana2[LK] = 0;
            zezinho2++;
        }else if (ana2[LK] == ',')
        {
            ana2[LK] = 0;
            zezinho2++;
        }else if (ana2[LK] == '?')
        {
            ana2[LK] = 0;
            zezinho2++;
        }else if (ana2[LK] == ' ')
        {
            ana2[LK] = 0;
            zezinho2++; 
        
        
        }
        }
        Ntamanho = tamanho - zezinho;
        Ntamanho2 = tamanho2 - zezinho2;
        if (tamanho >= tamanho2)
        {
            maior = tamanho;

        }
        else
        {
            maior = tamanho2;
        }
        


        while (j < maior)
        {
             for (int i = 0; i <= maior; i++)
            {
               if(ana1[j] == ana2[i] && ana1[j] != 0 ){
                zezinho3++;
                ana2[i] = 0;
                i = Ntamanho;
               }
             
            }
            j++;
        }

        //zezinho3 == Ntamanho && Ntamanho2

        if (Ntamanho != Ntamanho2)
        {
            printf("False");
        }else if (zezinho3 == Ntamanho && Ntamanho2)
        {
            printf("True");
        }else if (zezinho3 != Ntamanho || Ntamanho2)
        {
            printf("False");
        }
        

    return 0;
}
 
