#include <stdio.h>
#include <math.h>

int main (){

    int laranjas = 0, bananas = 0, ovos = 0;
    int mldeleite = 0, cleite = 0;
    int claranjas = 0, cbananas = 0, covos = 0, totalbananas = 0; 

    scanf("%d", &laranjas);
    scanf("%d", &bananas);
    scanf("%d", &ovos);
    scanf("%d", &mldeleite);
    
    if (laranjas < 0 || bananas < 0 || ovos < 0 || mldeleite < 0 ){
            printf("lurn maf :(");
    }else{
        if ( laranjas == 0 ){
            claranjas = pow(bananas,2);
        }

      if (claranjas > 0){
          cbananas = 2;
      }
      

      totalbananas = bananas + cbananas;  

        if (totalbananas > ovos){
        covos = claranjas - ovos;
        covos < 0 ? covos = 0 : 0;  

        }
    if ( (covos > 0 )&& (mldeleite < 2000)){
        cleite = 2000 - mldeleite;
        cleite < 0 ? cleite = 0 : 0;
    }else{
        if ( covos > 0 ){
            cleite = 0;
        }else{
            cleite = 500;
        }
        
        
    }
    
    printf("%d laranjas\n", claranjas);
    printf("%d bananas\n", cbananas);
    printf("%d ovos\n", covos);
    printf("%d mL de leite\n", cleite);
    }
    

        

}
    
