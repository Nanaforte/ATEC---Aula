//subprogramas / funções

#include<stdio.h>
#include<locale.h>
#include<windows.h>
#include<math.h>

void dez_aster();     //prototipagem de um subprograma em C
void vinte_aster()    //void -> vazio
{
	int i=1;
	for(i=1; i<=20; i++)
		printf("+");
	printf("(%d)",i-1);
	printf("\n");
}




void multi_aster(int num_ast, char simbolo)    //multi_aster(50)
{
	int i=1;
	for(i=1; i<=num_ast; i++)
		//printf("+");
		printf("%c",simbolo);
	printf("(%d)",i-1);
	printf("\n");
}





main()
{
	SetConsoleOutputCP(65001);
	
	for(int i=1; i<=20; i++)
		printf("+");
		printf("\n");
		
	for(int i=1; i<=10; i++)
		printf("*");
		printf("\n");
		
	for(int i=1; i<=5; i++)
		printf("*");
		printf("\n");
	
	vinte_aster();
	dez_aster();
				/*for(int i=1; i<=20; i++)
					printf("*");
					printf("\n");
				*/
	
	for(int i=1; i<=5; i++)
		printf("*");
		printf("\n");
		
	
	multi_aster(40,'+');
	multi_aster(30,'p');
	multi_aster(10,'#');
	multi_aster(1,'-');
	multi_aster(100,'1');
}


//=============== FIM DO MAIN ===============

void dez_aster() 
{
	for(int i=1; i<=10; i++)
		printf("*");
		printf("\n");
}