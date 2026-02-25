#include<stdio.h>
#include<windows.h>

int main()
{
	SetConsoleOutputCP(65001); 
	
	char palavras[1000];  //isto é um array para guardar as palavras/letras
	
	printf("Introduza uma palavra ou letra e prima Enter. (Para sair coloque 'X')");
	
	for(;;)
	{
		scanf("%s", palavras);
		
		//verificar se a letra/palavra é X x
		if(tolower(palavras[0]) == 'x' && palavras[1] == '\0')
			//a linha anterior verifica se a palavra é só a letra ‘x’ ou ‘X’ sem mais nada
		{
		break;
		}
		printf("%s\n", palavras);
	}
}