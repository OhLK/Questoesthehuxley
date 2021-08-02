#include <stdio.h>

int main(){

    int prop1 = 0, prop2 = 0;
    float moneytotal = 0, price1 = 0, price2 = 0, dividajb = 0,
    precototal = 0, diferenca = 0;

    scanf("%f", &moneytotal);
    scanf("%d", &prop1);
    scanf("%d", &prop2);
    scanf("%f %f", &price1, &price2);
    scanf("%f", &dividajb);
    
    precototal = price1 + price2;

    if (prop1 == 1 && prop2 == 1){
        if((price1 - price2) >= 0){precototal = (price1 * 0.88 + price2)
        
        }else{
         precototal = (price2 * 0.88 + price1);
        } 
    }else if ( prop1 == 0 && prop2 == 1){
        precototal = price2;
    }else if (prop1 == 1 && prop2 == 0){
        precototal = price1;
    }else{
        precototal = 0;
    }
    
    
    
    if (moneytotal > precototal + dividajb){
        printf("Sherliro livre do Jabbavitz e podendo voar");
    }else if (moneytotal > precototal ){
        
            diferenca = dividajb- (moneytotal - precototal) ; 
        printf("Sherliro consertou mas ta lascado com o Jabbavitz\nfaltam %.2f Napoleocoins", diferenca);
    }else if (moneytotal < precototal + dividajb)
    {
            diferenca = precototal + dividajb - moneytotal;
        printf("Sherliro vai ser perseguido hoje e ainda ta sem nave\nfaltam %.2f Napoleocoins", diferenca);
    }    
}
