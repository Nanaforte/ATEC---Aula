//CRIE UM PROGRAMA QUE PEÇA AO UTILIZADOR PARA INSERIR 2 NÚMEROS, SEGUIDAMENTE DEVE APRESENTAR A RESPETIVA SOMA

#include <stdio.h>   // Para printf e scanf
#include<windows.h>

 
int main() {
	
	SetConsoleOutputCP(65001);

    float a, b;
    printf("Insira um numeros: ");
    scanf("%f", &a);
    
    printf("Insira outro numeros: ");
    scanf("%f", &b);
    
    printf("Soma = %.2f\n", a + b);
    return 0;
}