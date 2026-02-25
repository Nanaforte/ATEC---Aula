#include <stdio.h>
#include<locale.h>
#include<windows.h>

int main() {
	
	SetConsoleOutputCP(65001);
	
    float salario;
    char estado_civil;
    
    printf("Qual o salario: ");
    scanf("%f", &salario);
    
    printf("Qual o estado civil (s)solteiro (c)casado: ");
    scanf(" %c", &estado_civil);
    
    estado_civil = (tolower(estado_civil));
    
    if (estado_civil == 's') {
        printf("Imposto: %.2f\n", salario * 0.10);
    } else if (estado_civil == 'c') {
        printf("Imposto: %.2f\n", salario * 0.09);
    } else {
        printf("Erro: Estado civil invalido!\n");
    }
}
