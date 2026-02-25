#include<stdio.h>
#include<locale.h>
#include<windows.h>

main()
{
	SetConsoleOutputCP(65001);
	
	char estado_civil;
	
	printf("Insira o seu estado civil, [s]olteiro, [c]asado.");
	scanf("%c", &estado_civil);
	
	
	//tolower - converte para minuscula
	//toupper - converte para maiscula
	
	switch(tolower (estado_civil))
	{
		//case 'S':
		case 's':
			printf("\nSolteiro(a)");
			break;		case 'S':
		
		//case 'C':	
		case 'c':
				printf("\nCasado(a)");
				break;
				
		default: //para todos os outros	caracteres
			printf("\nEsse estado civil não existe!");
			break;
		
	}
}


