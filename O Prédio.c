#include <stdio.h>

int main(){

 int and = 0, pep = 0, n = 0;
 int elevadorP = 0, quant = 0, f = 0;
 scanf("%d %d\n", &and, &pep);
 scanf("%d", &n);

 int nivel[n];
 int pessoas[n];  
 for (int i = 0; i < n; i++)
 {
     scanf("%d %d", &nivel[i], &pessoas[i]);
 }
 for (int i = 0; i <= n - 1; i++)
 {
     if (pessoas[i] < pep )
     {
        elevadorP = elevadorP + pessoas[i];
        pessoas[i];
     }
     else if (pessoas[i] >= pep)
     {
         f = pep - elevadorP;
         pessoas[i] -= f;
         elevadorP = 0;
         quant = quant + (nivel[i] * 2);
         i--;
     }
     if (elevadorP >= pep)
     {
        pessoas[i]= elevadorP - pep;
        elevadorP = 0;
        quant = quant + (nivel[i] * 2); 
        i--;
     }
 }
     if (elevadorP < pep && elevadorP > 0)
    {
     quant = quant + (nivel[n-1] * 2);
     elevadorP = 0;
    }
    printf("%d", quant);
  
}
