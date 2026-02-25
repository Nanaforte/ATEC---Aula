#include<stdio.h>
#include<locale.h>
#include<windows.h>

main()
{
	SetConsoleOutputCP(65001);
	
	/*Solicite ao utilizador uma letra do abecedário.
	No fim o programa deverá apresentar se a letra inserida 
	é uma vogal ou consoante


	isdigit (char) - verifica se é um digito (decimal digit)
	isalpha (char) - verifica se é uma letra do alfabeto
	isspace (char) - se é um espaço (tabulação)
	isalnum (char) - se for um alfanumérico (letra ou número)
	*/
	
	char letra;
	
	printf("Insira uma letra do abecedário: ");
	scanf("%c", &letra);

	//tolower - converte para minuscula
	//toupper - converte para maiscula
	
	switch(tolower(letra))
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("\nA letra '%c' é uma vogal.", letra);
			break;		
				
		default:
		if(isalpha(letra))
			printf("\n'%c' é uma Consoante", letra);
		else
			printf("\nNão inseriu uma letra do alfabeto");
		break;
	}
}





			                                                
         
			