//Ex3_e
//CRIE UM PROGRAMA QUE CALCULE/APRESENTE A MÉDIA ARITMÉTICA DE 5 TESTES DE PROGRAMAÇÃO, INSERIDOS PELO UTILIZADOR.

#include<stdio.h>
#include<windows.h>

main() {
    float soma, nota;      // "soma" para armazenar o total das notas
                           // "nota" para armazenar cada nota inserida
    
    for (int i = 1; i <= 5; i++) {           // loop onde vai armazenando as notas inseridas 5 vezes
        
		printf("Nota %d: ", i);              //Pede para inserir a nota 1,2,...,5 
        scanf("%f", &nota);                  //Armazena as notas inseridas
        
        soma = soma + nota;                        /* o valor atual da "nota" é somado oa valor existente em "soma" que depois é armazenado
        	                                       na "soma" outra vez */
    }
    
    printf("Media = %.2f\n", soma / 5);
    return 0;
}