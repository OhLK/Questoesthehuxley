#include <stdio.h>
#include <math.h>

int main () {

    int pessoasnolocal, amigos;
    int t1, t2, t3;
    int v1, v2, v3;
    int vergonha1, vergonha2, vergonha3, menor;
    double ideal;

    scanf("%d", &pessoasnolocal);
    scanf("%d", &amigos);
    scanf("%d", &t1);
    scanf("%d", &v1);
    scanf("%d", &t2);
    scanf("%d", &v2);
    scanf("%d", &t3);
    scanf("%d", &v3); 
    
    ideal = sqrt(pessoasnolocal);
    vergonha1 = pow(t1,2) * v1;
    vergonha2 = pow(t2,2) * v2;
    vergonha3 = pow(t3,2) * v3;


    if ( ideal <= amigos ){
        if (vergonha1 < vergonha2){
            if (vergonha1 < vergonha3){
                menor = vergonha1;
            }else{
                menor = vergonha3;
            }
        }else if ( vergonha2 < vergonha3 ){
            menor = vergonha2;
             printf("Voc� deve cantar a m�sica 2, boa sorte!");
return 0;
        }else{
            menor = vergonha3;
        }
        if (vergonha1 == vergonha2){
            printf("Voc� deve cantar a m�sica 1, boa sorte!");
        }else if (vergonha1 == vergonha3){
            printf("Voc� deve cantar a m�sica 1, boa sorte!");
        }else if (vergonha2 == vergonha3){
            printf("Voc� deve cantar a m�sica 2, boa sorte!");
        }else if (menor == vergonha1){
            printf("Voc� deve cantar a m�sica 1, boa sorte!");
        }else if (menor == vergonha2){
            printf("Voc� deve cantar a m�sica 2, boa sorte!");
        }else if (menor == vergonha3){
            printf("Voc� deve cantar a m�sica 3, boa sorte!");
        }
}else{
        printf("N�o cantarei, desculpa.");
    }
}    
    
