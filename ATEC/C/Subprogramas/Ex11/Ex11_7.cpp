/*
Menu principal
1 - Area do triangulo
2 - Area do Quadrado
3 - ...

da a resposta e aceita logo 1
getch()

*/

#include<stdio.h>
#include<windows.h>
#include<math.h>
#include <conio.h>

float area_triangulo(float b, float h)
{ return((b * h)/2 ); }

float area_quadrado(float l)
{ return(l*l); }

float area_retangulo(float a, float b)
{ return(a*b); }

float area_losango(float D, float d)
{ return((D*d)/2); }

float area_trapezio(float B, float b, float h)
{ return( ((B*b)/2 )*h); }

main()
{
	SetConsoleOutputCP(65001);
	
	int opcao;
	
	printf("========== Menu principal - Áreas ==========\n");
	printf("\n1 - Área do triângulo"
	"\n2 - Área do Quadrado"
	"\n3 - Área do Retângulo"
	"\n4 - Área do Losango"
	"\n5 - Área do Trapézio"
	"\n0 - Sair\n"
	"\n============================================\n"
	"Escolha a opção que deseja fazer: "
	);
	opcao = getch();
	
	switch(opcao)
	{
		case '1': //triangulo
			float b,h;
			printf("\nDiga a medida da base - ");
			scanf("%f", &b);
			printf("Diga a medida da altura - ");
			scanf("%f", &h);
			printf("A área do triângulo é %.2f", area_triangulo(b,h));
			break;
			
		case '2': //quadrado
			float l;
			printf("\nDiga qual é a medida do lado - ");
			scanf("%f",&l);
			printf("A área do Quadrado é %.2f", area_quadrado(l));
			break;
			
		case '3': //retangulo
			float a;
			printf("\nDiga o comprimento - ");
			scanf("%f",&a);
			printf("Diga a largura - ");
			scanf("%f",&b);
			printf("A area do retângulo é %.2f", area_retangulo(a,b));
			break;
			
		case '4': //losango
			float D,d;
			printf("\nDiga a medida da diagonal maior - ");
			scanf("%f",&D);
			printf("Diga a medida da diagonal menor - ");
			scanf("%f",&d);
			printf("A área do losango é %.2f",area_losango(D,d));
			break;
			
		case '5': //trapezio
			float B;
			printf("\nDiga a medida da base maior - ");
			scanf("%f",&B);
			printf("Diga a medida da base menor - ");
			scanf("%f",&b);
			printf("Diga a medida da altura - ");
			scanf("%f",&h);
			printf("A área do trapézio é %.2f",area_trapezio(B,b,h));
			break;
			
		case '0':
			break;
			
		default:
			printf("\nErro. Escolha uma das opções indicadas.");
			break;
	}		
}