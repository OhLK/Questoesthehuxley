#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){

	char zezinho[500] = {0};
    int LK = 0;
	
	fgets(zezinho,500,stdin);

	for ( int j = 0; j < 500; j++)
	{
		if (zezinho[j] == '4')
		{
			zezinho[j] = 'a';
		}else if (zezinho[j] == '5' )
        {
            zezinho[j] = 'e';
        }else if (zezinho[j] == '1' )
        {
            zezinho[j] = 'i';
        }else if (zezinho[j] == '0' )
        {
            zezinho[j] = 'o';
        }else if (zezinho[j] == '2' )
        {
            zezinho[j] = 'u';
        }
        
        
    }
    while (LK < 499)
    {
        if (zezinho[0])
        {
            zezinho[0] = toupper(zezinho[0]);
        }
        
        if( zezinho[LK] == '.')
        {
            zezinho[LK+2] = toupper(zezinho[LK+2]);
        }
        LK++;
        
    }
    
     
    printf("%s", zezinho);
}
