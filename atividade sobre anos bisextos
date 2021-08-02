#include <stdio.h>

int main() {

    int dia, mes, ano, tipoMes;

    scanf("%d", &dia);
    scanf("%d", &mes);
    scanf("%d", &ano);

    mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12 ? tipoMes = 1 : 0;
    
    mes == 4 || mes == 6 || mes == 9 || mes == 11 ? tipoMes = 2 : 0;

    mes == 2 ? tipoMes = 3 : 0;

    if ( ano >= 1900 && ano <= 2100 && !(ano % 100 == 0 && ano % 400 != 0)){
    
    switch (tipoMes){
    case 1: 
        if ( dia <= 31 && dia >= 1 ){
            printf("valida");
        }else{
            printf("invalida");
        }
    break;

    case 2:
        if ( dia <= 30 && dia >= 1 ){
            printf("valida");
        }else{
            printf("invalida");
    }
    break;

    case 3: 
        if ( ano % 4 == 0){
            if ( dia <= 29 && dia >= 1 ){
            printf("valida");
        }else{
            printf("invalida");
            }
        
    }else if( dia <= 28 && dia >= 1){
        printf("valida");
       
    }else{
        printf("invalida");
    }
    default:
        break;
    } 

}else{
    printf("invalida");
}

}
