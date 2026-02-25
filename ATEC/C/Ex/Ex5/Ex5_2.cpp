#include <stdio.h>  
#include<locale.h>
#include<windows.h>

int main() {
	
	SetConsoleOutputCP(65001);

 	float salario;
    char sexo;
    
    printf("Qual o seu salario: ");
    scanf("%f", &salario);
    
    printf("Qual o seu sexo: ");
    scanf(" %c", &sexo);
        
    switch(tolower(sexo)) {
        case 'f':
            printf("Imposto: %.2f\n", salario * 0.10);  //10%  mulheres
            break;
        case 'm':
            printf("Imposto: %.2f\n", salario * 0.15);   //15%  homens
            break;
        default:
            printf("Erro: Sexo invalido! Use 'm' ou 'f'.\n");
            break;
    }
}