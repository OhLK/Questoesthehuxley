#include <stdio.h>

typedef struct{
    int numero_da_passagem;
    char data[11];
    char de[50];
    char para[50];
    char horario[10];
    int poltrona;
    int idade;
    char nome[50];
}dados;
int main(){

    dados users[50] = {0};

    int cont = 0, media = 0, flagg = 0, i = 0;

    scanf("%d", &flagg);
    while (flagg != -1)
    {   
        users[i].numero_da_passagem = flagg;
        scanf(" %[^\n]", users[i].data);
        scanf(" %[^\n]", users[i].de);
        scanf(" %[^\n]", users[i].para);
        scanf(" %[^\n]", users[i].horario);
        scanf("%d", &users[i].poltrona);
        scanf("%d", &users[i].idade);
        scanf(" %[^\n]", users[i].nome);
        cont += users[i].idade; 
        i++;
        scanf("%d", &flagg); 
 
       
    }
    media = cont / i;
    for (int j = 0; j < i; j++)
    {
        if (users[j].poltrona % 2 == 0)
        {
           if (users[j].idade > media)
           {
               printf("%s\n", users[j].nome);
           }
        }
    }
    return 0;

} 
