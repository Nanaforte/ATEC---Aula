#include<stdio.h>

main()
{
    int x = 3;  
    int *ptr_x = &x;            
    //ptr_x = &x;  tbm é possivel a atribuicao ser feita assim, fora da declaracao  
	int y;              
    y = *ptr_x;           

    printf("Sabendo que x = %d ...\n\n"
    		"... atribuindo o valor %d a um apontador (ex: ptr_x)...\n\n"  //linha 6
			"... e em seguida passando o valor do apontador (ex: ptr_x) para uma variavel 'y'...\n\n"
			"Mostre que y = %d\n", x, x, y);	
}