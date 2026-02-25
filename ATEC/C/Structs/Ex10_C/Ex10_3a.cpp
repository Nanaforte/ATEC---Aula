#include <stdio.h>
#include <string.h>

struct jogador
	{
		int numero;
		int idade;
		int altura;
		int peso;
	};
	
void viewjogador(jogador j)
{
	printf("\nNumero de jogador: %d\n", j.numero);
	printf("Idade: %d\n", j.idade);	
	printf("Altura (cm): %d\n", j.altura);
	printf("Peso (Kg): %d\n", j.peso);
	printf("----------------------------------------\n");
}


main()
{
	jogador j1={1,20,180,90};
	jogador j2={2,22,175,80};
	
	int op;
	
	do{
		printf("Qual o jogador quer fazer? [1,2, 0 - sair]:");
		scanf("%d", &op);
		getchar();
		
		if(op==1){
			viewjogador(j1);
		}
		else if(op==2){
			viewjogador(j2);
		}
		else if(op==0){
			printf("\nA sair do programa");
		}
		else{
			printf("\nop invalida! Escolha 1,2 ou 0\n");
		}
	}while (op!=0);
	
	printf("\nFim do programa. \n");
}