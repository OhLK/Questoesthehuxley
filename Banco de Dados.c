#include <stdio.h>

 typedef struct{
      int idade; 
      char nome[50];
      char sexo[10];
      char estadocivil[10];
      int quantidade_de_amigos;
      int quantidade_de_fotos;
    }dados;

int main(void){

   int testes;
   dados user[99] = {0}; 

    scanf("%d", &testes);

    for (int i = 0; i < testes; i++)
    {
        scanf("%d", &user[i].idade);
        scanf(" %[^\n]s", user[i].nome);
        scanf(" %[^\n]s", user[i].sexo);
        scanf(" %[^\n]s", user[i].estadocivil);
        scanf("%d", &user[i].quantidade_de_amigos);
        scanf("%d", &user[i].quantidade_de_fotos);
        
        printf("Idade: %d\n", user[i].idade);
        printf("Nome: %s\n", user[i].nome);
        printf("Sexo: %s\n", user[i].sexo);
        printf("Estado Civil: %s\n", user[i].estadocivil);
        printf("Numero de amigos: %d\n", user[i].quantidade_de_amigos);  
        printf("Numero de fotos: %d\n", user[i].quantidade_de_fotos);
        printf("\n");  
    }
   return 0;
}
