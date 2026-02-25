/*
Pointer - trabalhar com posição da memória da variável

Um apontador pode ser declarado como uma qualquer outra variável.
Permite armazenar o enderço de uma outra variável

Sintaxe:  tipo_dados * nome_variavel
ex:
	char a,b, *p    -> *p variável pointer


tipo_dados -> tipo de dados que a variável vai apontar
* -> indica que é uma variável do tipo pointer
p -> nome da variável do tipo apontador (outro ex: ptr)

*/

#include<stdio.h>
#include<locale.h>
#include<windows.h>
#include<math.h>

//exemplo prático
main()
{
	int a=5, b=7;
	int *ptr = &a;  //'ptr' aponta para 'a'
	
	printf("a=%d, b=%d, ptr=%d", a, b, *ptr);
	printf("\n\nA posicao de memoria = %d", ptr);  //em decimal
	printf("\nA posicao de memoria = %p", ptr);  //em hexa
	printf("\n\n---------------------------------------------\n");
	//ptr sem o '*' mostra a posicao da memoria,
	//no caso da variável'a'
	
	
//------------------------------------------------------------------------------------------------------------------------------
	
	//pointer e stings
	//Desta forma não preciso de criar um array (ou vetor)
	
	char *nome="Ana";
	printf("\nNome = %s", nome);
	printf("\n\n---------------------------------------------\n");
	

//------------------------------------------------------------------------------------------------------------------------------
	
	//outro exemplo
	
	int idade=25;
	int *ptr_idade=&idade;  //variavel do tipo pointer que aponta,
							//ou armazena o endereço/posicao da memoria da variavel "idade"
	
	printf("\nIdade = %d", idade); //mostra a info da variavel "idade"
	printf("\nPosicao/endereco da variavel 'idaded': %p", &idade);
	printf("\nPosicao/endereco do pointer 'ptr_idade': %p", ptr_idade);
	printf("\n\n---------------------------------------------\n");
	
	//'&' -> mostra a posicao/endereco da memoria da variavel
	
	//idade -> mostra a info que esta na variavel 'idade'
	//&idade -> mostra a posicao/endereço de memoria da variavel idade que não é pointer
	
	
//------------------------------------------------------------------------------------------------------------------------------
	
	//Pointer e Arrays
	//é possivel ver a posicao/endereço individual de cada elemento do array
	
	int arraynums[4]={10,15,20,25};
	
	//mostrar os valores do array
	for(int i=0; i<=3; i++)
	{
		printf("\nPosicao %d do array: %d",i,arraynums[i]);
	}
	printf("\n\n---------------------------------------------\n");
	
	
	//mostrar a posicao/endereço de memoria da variavel arraynums
	for(int i=0; i<=3; i++)
	{
		printf("\nPosicao %d do array: %d",i,&arraynums[i]);
	}
	printf("\n\n---------------------------------------------\n");
	
	//CURIOSIDADE:
	//verificar que a posição/endereço da memória
	//de cada index do array, vai de 4 em 4 bytes,
	//isto porque o tipo de dados definido para o array é "int" -> 4 bytes
	
	
	
	//Pointer e Array
	//Posso aceder a cada posição do array, acedendo a cada endereço da sua memória
	
	//Mostrar a 1º 'gaveta' do array, mas por posição/endereço de memória
	printf("\nPrimeira 'gaveta' do array: %d", *(arraynums));
	
	//Podemos ent "incrementar" o pointer para aceder aos endereços das restantes 'gavetas' do arraynums
	printf("\nSegunda 'gaveta' do array: %d", *(arraynums+1));
	printf("\nTerceira 'gaveta' do array: %d", *(arraynums+2));
	printf("\nQuarta 'gaveta' do array: %d", *(arraynums+3));
	printf("\n\n---------------------------------------------\n\n");
	
	
	
	//Mostrar a informação das 'gavetas' usando apenas 1 printf 
	//e atraves de pointers com a sintaxe *(arraynums + ?)
	for(int i=0; i<=3; i++)
	{
    	printf("%d gaveta - valor %d\n", i+1, *(arraynums + i));
	}
	printf("\n\n---------------------------------------------\n");
	
	
//------------------------------------------------------------------------------------------------------------------------------

	
	//Alteração de valores no array via pointer
	// int arraynums[4]={10,15,20,25};
	
	*arraynums=100;  //[0]
	*(arraynums+3)=250;  //[3]
	printf("\nPrimeira 'gaveta' do array: %d", *(arraynums));
	printf("\nQuarta 'gaveta' do array: %d\n", *(arraynums+3));
	
	//mostrando todo o array
	for(int i=0; i<=3; i++)
	{
		printf("\nPosicao %d do array: %d",i,arraynums[i]);
	}
	printf("\n\n---------------------------------------------\n");

}


















