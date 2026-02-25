#include<stdio.h>
#include<locale.h>
#include<windows.h>
#include<math.h>

int soma(int a, int b)
{
	/*int resultado;
	resultado= a+b;
	return resultado;
	*/
	//OU
	return a+b;
}


//==================================================================================

int resultado(int idade)
{
	if(idade>=18)
		return 1;    //1 -> verdadeiro
	else
		return 0;    //0 -> falso
}


main()
{
	SetConsoleOutputCP(65001);
	
	printf("2+2=%d",soma(2,2));
	
	if(resultado(10))   //10 é a idade que estou a avaliar
		printf("\nMaior de idade");
	else
	printf("\nMenor de idade");
	
}
