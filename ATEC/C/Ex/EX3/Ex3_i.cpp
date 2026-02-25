//Ex3_i
// CRIE UM PROGRAMA QUE LEIA UM VALOR REAL QUE REPRESENTA GRAUS CELSIUS, DEVOLVENDO EM SEGUIDA O SEU EQUIVALENTE EM FAHRENHEIT.
// C = (F - 32) × 5/9

#include<stdio.h>
#include<windows.h>

main(){
	
	float C, F;
	
	printf("Insira a temperatura em Celsius. ");
	scanf("%f", &C);
	
	F = (C * 9 / 5) + 32;
	
	printf("%.3f C = %.3f F\n", C, F);
    return 0;

}

    