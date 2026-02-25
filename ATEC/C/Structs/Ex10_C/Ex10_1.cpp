/*Programa para mostrar uma estrutura de 1 individuo com as seguintes caracteristicas:
Nome
Idade
Sexo
Estado Civil
Salário
Mês do Salário
*/

#include <stdio.h>
#include <string.h>

int main()
{
	
	struct individuo{
		char nome[20];
		int idade;
		char sexo[20];
		char estado_civil[20];
		float salario;
		char mes_salario[20];
	}pess;

	
	strcpy(pess.nome,"Ana Forte");
	pess.idade=22;
	strcpy(pess.sexo,"Feminino");
	strcpy(pess.estado_civil,"Solteiro");
	pess.salario=950.50;
	strcpy(pess.mes_salario,"Fevereiro");
	
	
	printf("Nome: %s", pess.nome);
	printf("\nIdade: %d", pess.idade);
	printf("\nSexo: %s", pess.sexo);
	printf("\nEstado Civil: %s", pess.estado_civil);
	printf("\nSalario: %.2f", pess.salario);
	printf("\nMes do Salario: %s", pess.mes_salario);
	
	
}