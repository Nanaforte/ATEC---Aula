#include<stdio.h>
#include<windows.h>
#include<math.h>

float volume(float raio)  //argumentos ou parâmetros
{
	return (4 * M_PI * pow(raio,3)/3);
	// (4/3*3.14*raio*raio*raio)
}

main()
{
	SetConsoleOutputCP(65001);
	
	float raio;
	printf("Insira o valor para o raio: ");
	scanf("%f",&raio);
	
	printf("Volume da esfera = %.2f cm³",volume(raio));
	//³  ->  manter presionada a tecla ALT e escreve 0179
}