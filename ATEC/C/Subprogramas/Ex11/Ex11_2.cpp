#include<stdio.h>
#include<windows.h>

float soma(float a, float b)
{ return a+b;}

float subtra(float a, float b)
{ return a-b;}

float multipl(float a, float b)
{ return a*b;}

float divisao(float a, float b)
{ return a/b;}


main()
{
	SetConsoleOutputCP(65001);
	
	float num1, num2;
	
	printf("Insira um número: ");
	scanf("%f",&num1);
	
	printf("Insira um outro número: ");
	scanf("%f",&num2);
	
	printf("\n%.2f + %.2f = %.2f",num1,num2,soma(num1,num2));
	printf("\n%.2f - %.2f = %.2f",num1,num2,subtra(num1,num2));
	printf("\n%.2f x %.2f = %.2f",num1,num2,multipl(num1,num2));
	printf("\n%.2f / %.2f = %.2f",num1,num2,divisao(num1,num2));
}