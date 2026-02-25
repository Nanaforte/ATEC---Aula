#include<stdio.h>
#include<windows.h>

int main() 
{
	SetConsoleOutputCP(65001); 
	
    int num, i = 1;    //contador
    
    printf("Introduza um número para ver a sua tabuada: ");
    scanf("%d", &num);
        
    while (i <= 10) {
        printf("%d * %2d = %2d\n", num, i, num * i);
        i++;
    }
}