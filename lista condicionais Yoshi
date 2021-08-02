#include <stdio.h>
#include <math.h>

int main() {

    float money, custoverde, custovermelho, custoroxo, custoamarelo;
    float yoshiverde, yoshivermelho, yoshiroxo, yoshiamarelo;

    scanf("%f\n", &money);
    scanf("%f", &yoshiverde);
    scanf("%f", &yoshivermelho);
    scanf("%f", &yoshiroxo);
    scanf("%f", &yoshiamarelo);

    custoverde = 80 / yoshiverde;
    custovermelho = 100 / yoshivermelho;
    custoroxo = 120 / yoshiroxo;
    custoamarelo = 80 / yoshiamarelo;
    
        if ((money <= yoshiverde) && (money <= yoshivermelho) && (money <= yoshiroxo) && (money <= yoshiamarelo)){
            printf("Acho que vou a pe :(");
        }else{
            if ((custoverde >= custovermelho) && (custoverde >= custoroxo) && (custoverde >= custoamarelo) && (money >= yoshiverde)){
                printf("Verde");
            }else if ((custovermelho >= custoverde) && (custovermelho >= custoroxo) && (custovermelho >= custoamarelo) && (money >= yoshivermelho) ){
                printf("Vermelho");
            }else if ((custoroxo >= custoverde) && (custoroxo >= custovermelho) && (custoroxo >= custoamarelo) && (money >= yoshiroxo)){
                printf("Roxo");
            }else if ((custoamarelo >= custoverde) && (custoamarelo >= custovermelho) && (custoamarelo >= custoroxo) && (money >= yoshiamarelo)){
                printf("Amarelo");
            }    
        }    
            
}
