#include <stdio.h>
#include <string.h>


main()
{
	
	struct jogador
	{
		int numero;
		int idade;
		int altura;
		int peso;
	}j={1,20,180,90};
	
	printf("Numero de jogador: %d\n", j.numero);
	printf("Idade: %d\n", j.idade);
	printf("Altura (cm): %d\n", j.altura);
	printf("Peso (Kg): %d\n", j.peso);
	
}