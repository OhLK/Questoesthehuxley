#include <stdio.h>


int main()
{
  int  numero = 0, i= 0, swap = 0,n = 0, testes = 0, flagg = 0, zezinho = 0, zezinho2 = 0;

  scanf("%d",&testes);

  while(i < testes){
      scanf("%d", &numero);
      int array[numero];
      for (int V = 0; V < numero; V++)
      {
        array[V] = 0; 
      }
      for(int k = 0; k < numero; k++){
          scanf("%d", &array[k]);
      }
      for(int j = 0; j < numero - 1 ; j++){

          if(array[j] > array[j + 1]){
            swap++;
            if (swap > n)
            {
              n = swap;
              flagg = j;
            }
            
          }else{
            
            
            swap = 0;
          } 
      }
      zezinho2 = (flagg - n) + 1;
      zezinho = zezinho2 + n;
      if (n == 0)
      {
        printf("0\n");
      }else{
          printf("%d\n", n + 1);

          for (zezinho2 ; zezinho2 <= zezinho; zezinho2++)
            { 
            printf("%d ", array[zezinho2]);
            }
    
            printf("\n");  

      } 
    i++;
    flagg = 0; zezinho2 = 0; zezinho = 0;n = 0;numero = 0;swap = 0;
    
  }
  return 0;
}
