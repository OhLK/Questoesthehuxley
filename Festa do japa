#include <stdio.h>

int main () {
    
    int saques, manjus, yakitoris, convidados;
    int copinhosaque, minimoyakitoris, yakitorisfalta;
    int manjufalta, minimocopos, copinhosfalta;
    int minimomanju;
    char flag_copos = 0, flag_manjus = 0, flag_yak = 0;

    scanf("%d", &saques);
    scanf("%d", &manjus);
    scanf("%d", &yakitoris);
    scanf("%d", &convidados);
    
    minimocopos = convidados * 4; 
    copinhosaque = (saques * 675) / 45; 
    
    convidados < 4 ? convidados = 4 : 0;
    
    if ( !(copinhosaque >= minimocopos) ){
        copinhosfalta = minimocopos - copinhosaque; 
        flag_copos = 1;
    }

    minimomanju = convidados * 5;   


    if ( !(manjus >= minimomanju) ){
        manjufalta = minimomanju - manjus;
        flag_manjus = 1;
    }

    minimoyakitoris = convidados * 3;

    if ( !(yakitoris >= minimoyakitoris) ){
        yakitorisfalta = minimoyakitoris - yakitoris;
        flag_yak = 1;    
    }

    if( flag_copos == 0 && flag_manjus == 0 && flag_yak == 0 ){
        printf("Partiu Festa do Japa!");
    }else if( flag_copos == 1 && flag_manjus == 1 && flag_yak == 1 ){

        printf("Partiu Festa do Japa...Japacama");
    }else if (flag_copos == 1 && flag_manjus == 0 && flag_yak == 0){
        printf("Faltaram %d saques", copinhosfalta);
    
    }else if (flag_copos == 0 && flag_manjus == 1 && flag_yak == 0){
        printf("Faltaram %d manjus", manjufalta);

    }else if (flag_copos == 0 && flag_manjus == 0 && flag_yak == 1){
        printf("Faltaram %d yakitoris", yakitorisfalta);

    }else if (flag_copos == 1 && flag_manjus == 0 && flag_yak == 1){
        printf("Faltaram %d saques e %d yakitoris", copinhosfalta, yakitorisfalta);

    }else if (flag_copos == 1 && flag_manjus == 1 && flag_yak == 0 ){
        printf("Faltaram %d saques %d manjus", copinhosfalta, manjufalta);

    }else if (flag_copos == 0 && flag_manjus == 1 && flag_yak == 1 ){
        printf("Faltaram %d manjus e %d yakitoris", manjufalta, yakitorisfalta);

    }
    
  return 0;  
} 
