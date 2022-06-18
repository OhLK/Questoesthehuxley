#include <stdio.h>
#include <math.h>
int main(void){
    int x = 0, a = 0, b = 0;
        while (scanf("%d", &x) && x != 0 && x != EOF)
        {
        a = ((x - 1) / 2 + 1);
        b = ((x - 1) / 2);
        printf("%d - %d\n", a*a, b*b);
        }
}
