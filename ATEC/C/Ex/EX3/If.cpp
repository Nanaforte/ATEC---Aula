#include<stdio.h>
#include<windows.h>

main()
{
	SetConsoleOutputCP(65001);
	
//F --> estrutura de decisão
	
	int idade;
	
	printf("Insira a sua idade: ");
	scanf("%d", &idade);
	
	if(idade >= 18)         //parte do teste lógico
		printf("Maior de idade!\n");        //Se o teste lógico for verdadeiro
	else 
		printf("Menor de idade!\n");        //Se o teste lógico for falso
	
	
	//OUTRA FORMA
	
		if(idade < 18)      
		printf("Menor de idade!\n");        //Se o teste lógico for falso
	else
		printf("Maior de idade!\n");       //Se o teste lógico for verdadeiro

}