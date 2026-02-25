#include<stdio.h>
#include<windows.h>

int main() 
{
    SetConsoleOutputCP(65001); 

    int num = 0;
    int soma = 0;
    int contador = 0;

    printf("Introduza uma série de números e termine com -1:\n");

    for (;;)
    {
        scanf("%d", &num);

        if (num == -1) {
            if (contador == 0) {
                printf("Erro: Nenhum número foi introduzido.\n");
            } else {
                float media = (float)soma / contador;
                printf("A média é: %.2f\n", media);
            }
            break; 
        }

        soma += num;    
        contador++;       
    }
}
