#include <stdio.h>

typedef struct
{
    int codigo;
    char nome[50];
    float price;
}loja;

int main(){

    int produtos = 0, quantidade = 0;
    int codigo2 = 0, brek = 1;
    int LK = 0, i = 0;
    float tudo = 0;

    scanf("%d", &produtos);

    loja lojinha[produtos];

    for (int i = 0; i < produtos; i++)
    {
        scanf("%d", &lojinha[i].codigo);
        scanf(" %49[^\n]", lojinha[i].nome);
        scanf("%f", &lojinha[i].price);

    }
    while (brek != 0){
       
        codigo2 = 0;
        quantidade = 0;

        scanf("%d", &codigo2);
        if (codigo2 != 0)
        {
            scanf("%d", &quantidade);
        }
        if (quantidade > 0)
        {
            for (LK = 0; LK < produtos; LK++)
            {
                if (codigo2 == lojinha[LK].codigo)
                {
                    tudo += lojinha[LK].price * quantidade;
                }
                
            }
            
        }else if (codigo2 == 0)
        {
            brek = 0;
        }
        
            
    }
    printf("%.2f", tudo);

    return 0;

}

    
