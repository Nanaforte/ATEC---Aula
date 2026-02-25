/*
Estruturas - um conjunto de uma ou mais variáveis, agrupadas sobre um único nome, facilitando assim a sua referência e manipulação

Sintaxe:

struct [nome_da_estrutura]
{
	tipoDados campos (ou membros),
}[nome_variável];

Podem ser declaradas fora ou dentro do main()

*/



#include<stdio.h>
#include<string.h>
#include<windows.h>

main()
{
	//criar a struct
	struct DataNascimento {
		int dia, ano;
		char mes[20];
	}/*é possível declarar a variável AQUI*/;
	
	//ou declarar a variável "dn" do tipo struct DataNascimento AQUI
	DataNascimento dn; 
	
	dn.dia=11;
	dn.ano=2026;
	strcpy(dn.mes,"Fevereiro");   //strcpy -> string copy da variavel dn.mes
/*	
	printf("Data de Nascimento: %d - %s - %d", dn.dia, dn.mes, dn.ano);
*/	
	
/*
==================================================================================================================================	
==================================================================================================================================	
*/

	//Outra forma de inicializar uma variável do tipo struct «DataNascimento»
	DataNascimento dn2={1,2026,"Janeiro"};	
/*	
	printf("\n--------------------------------");
	printf("\nData de Nascimento: %d - %s - %d", dn2.dia, dn2.mes, dn2.ano);
*/	
/*
==================================================================================================================================	
==================================================================================================================================	
*/

	//Exemplo de registo de pessoa
	struct registo{
		char nome[20];
		char morada[50];
		int telefone;		
	}rg={"Ana Forte","Rua das Flores",912876345};  
	//rg é uma variável do tipo "registo" (struct) e fica já inicializada
/*	
	printf("\n--------------------------------");
	printf("\nNome: %s",rg.nome);
	printf("\nMorada: %s",rg.morada);
	printf("\nTelefone: %d",rg.telefone);
*/	
/*
==================================================================================================================================	
==================================================================================================================================	
*/

	struct livros{
		char titulo[20];
		char autor[20];
		char assunto[30];
		int livro_id;
	};

/*
	livro lv1 = {"C Programming", "Pedro", "Tutoriais de 'C'",6495407};
	livro lv2 = {"Telecom 2", "Monday", "Telecom Billing Tutorial",6495700};

	printf("\n--------------------------------");
	printf("\nLivro 1 titulo : %s",lv1.titulo);
	printf("\nLivro 1 autor : %s",lv1.autor);
	printf("\nLivro 1 assunto : %s",lv1.assunto);
	printf("\nLivro 1 livro_id : %d",lv1.livro_id);
	printf("\n");
	printf("\nLivro 2 titulo : %s",lv2.titulo);
	printf("\nLivro 2 autor : %s",lv2.autor);
	printf("\nLivro 2 assunto : %s",lv2.assunto);
	printf("\nLivro 2 livro_id : %d",lv2.livro_id);
	
	//Outra forma de fazer os prints
	printf("\n");
	printf("\n--------------------------------");
	printf("\nLivro1\nTitulo: %s\nAutor: %s\nAssunto: %s\nId: %d",lv1.titulo, lv1.autor, lv1.assunto, lv1.livro_id);
	printf("\n");
	printf("\nLivro2\nTitulo: %s\nAutor: %s\nAssunto: %s\nId: %d",lv2.titulo, lv2.autor, lv2.assunto, lv2.livro_id);
*/	
	
	
	
	
	
	
	//versão 2 do exercício anterior:
	//1) Declarar maos variáveis, de outra forma
	//2) Solicictar ao utilizador o preenchido do dados do livro
	
	
	//1) 
	livros livro[100]; //declaração da variável "livro" do tipo vetor(array), pertencente à struct livros
	
	int quantidade;
	printf("\nQuantos livros quer inserir? ");
	scanf("%d", &quantidade);
	
	getchar();  //isto irá absorver o «enter»  da introdução da Quantidade livros
	
	for(int i=0; i<quantidade; i++)
	{
		printf("\n---------- Livro %d ----------", i+1);
		printf("\nInsira os dados do livro:");
		
		printf("\nTitulo: ");
		gets(livro[i].titulo);   //gets -> para obter strings
		
		printf("Autor: ");
		gets(livro[i].autor);
		
		printf("Assunto: ");
		gets(livro[i].assunto);
		
		printf("Id: ");
		scanf("%d", &livro[i].livro_id);
		
		getchar();
	}
	
	//para mostar os livros inseridos
	printf("\n\n===================== Livros inseridos =====================");
	
	for(int i=0; i<quantidade; i++)
	{
		printf("\n----- Livro %d -----", i+1);
		printf("\nTitulo: %s", livro[i].titulo);
		printf("\nAutor: %s", livro[i].autor);
		printf("\nAssunto: %s", livro[i].assunto);
		printf("\nId: %d", livro[i].livro_id);
		printf("\n--------------------------------");
	}
}







