#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char array[50] = {0}, arrayR[7] = {0};
    int tam, LK, LKK;
    long long int soma = 0;
    
    scanf(" %d", &tam);
    for (LK = 0; LK < tam; LK++)
    {
        scanf(" %30[^\n]", array);
        for ( LKK = 0; LKK < 6; LKK++)
        {
            arrayR[LKK] = array[LKK];
        }
        if (arrayR[0] == '-' )
        {
            soma+= atoi(arrayR);
        }else{
            soma += (atoi(arrayR)/10);
        }
    }
    printf("%d00000000000000\n\n", soma);
    
    return 0;
}
