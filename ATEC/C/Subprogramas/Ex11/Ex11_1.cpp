#include<locale.h>
#include<windows.h>
#include<math.h>

void caixa()
{
	int i;
	
	//tampo
	for(i=1; i<=10; i++)
	{ printf("*"); }
	printf("\n");
	
	//paredes laterais
	for(i=1; i<=10; i++)
	{ 
		//printf("*        *\n");
		//OU
		//printf("*\t *\n");
		//OU
		printf("*");
		for(int j=1; j<=8; j++)
			printf(" ");
		printf("*\n");	
	}
	
	//base
	for(i=1; i<=10; i++)
	{ printf("*"); }
	printf("\n");
	
}



main()
{
	SetConsoleOutputCP(65001);
	
	caixa();
	printf("\nPrima Enter");
	getchar();
	caixa();
}