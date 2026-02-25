//Ex3_a
//CRIE UM PROGRAMA QUE PEÇA AO UTILIZADOR PARA INSERIR 2 NÚMEROS; SEGUIDAMENTE DEVE APRESENTAR A RESPETIVA SOMA.

#include <stdio.h>  
#include<windows.h>  //BIBLIOTECA PARA O SetConsoleOutput(65001)

 
int main() {
	
	SetConsoleOutputCP(65001);      //PARA ESCREVERMOS COM ACENTOS (NECESSITA DA BIBLIOTECA)

    float a, b;
    printf("Insira um numeros: ");
    scanf("%f", &a);                  //%f para float
    
    printf("Insira outro numeros: ");
    scanf("%f", &b);
    
    printf("Soma = %.2f\n", a + b);
    return 0;
}