#include<stdio.h>
#include<windows.h>

int main() 
{
	SetConsoleOutputCP(65001); 

    int numero;
    
    printf("Introduza um número: ");
    scanf("%d", &numero);
    
    for (int i = 1; i <= numero; i++) {
        // i  --> sequência crescente (1, 2, 3, ...)
        // - i + 1  --> a sequência decrescente (n, n-1, n-2, ...)
        printf("%d         %d\n", i, numero - i + 1);
    }
}