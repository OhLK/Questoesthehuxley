#include <stdio.h>

int main(void){

    int num1, num2, div1, primoe = 0, divisores = 0, primo1 = 0, k = 0 ,i = 0, j,  primodi = 0, divisordi = 0, zacariasnum = 0, zacarias = 0, primo2 = 0;
    
    scanf("%d %d", &num1 , &num2);

    while (num1 <= num2){
        div1 = 0;
        for( i = 1; i <= num1; i++){
            if ( num1 % i == 0)
            {
                
                div1++;
               
            }
          
        }
        if (div1 == 2){
        for (primoe = num1 - 1; 2 <= primoe; primoe--){
    
                divisores = 0;
                for( j = 1; j <= primoe; j++)
                {
                    
                    if (primoe % j == 0)
                    {
                        
                        divisores++;
                    } 
                }
                if (divisores == 2)
                {
                    primo1 = primoe;
                    primoe = 1;
                }
                
            }
            for (primodi = num1 + 1; primodi <= 2003; primodi++)
            {
                divisordi = 0;
                for (k = 1; k <= primodi; k++)
                {
                    if (primodi % k == 0)
                    {
                        divisordi++; 
                    }
                    
                }
                if (divisordi == 2)
                {
                    primo2 =primodi;
                    primodi = 2004;
                }
                
            }
            zacarias = ((primo1 + primo2) /2);
            if (zacarias == num1 && primo1 != 2)
            {
                zacariasnum++;
            }
              
        }
            num1++;
 }
        printf("%d\n", zacariasnum);
    
}
