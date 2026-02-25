#include <stdio.h>
#include <string.h>

struct Pessoa{
	char nome[20];
	char endereco[40];
	int telefone;
};


int main()
{
	Pessoa pessoas[5];
	
	printf("Escreve os dados de 5 pessoas: \n\n");
	
	for(int i=0; i<5; i++)
	{
		printf("Escreva o seu Nome: ");
		gets(pessoas[i].nome);
		
		printf("Escreva o seu Endereco: ");
		gets(pessoas[i].endereco);
		
		printf("Escreva o seu Telefone: ");
		scanf("%d", &pessoas[i].telefone);
		getchar();
		
		printf("\n");
	}
	
			
}