#include<stdio.h>
#include<windows.h>

int main() 
{
   SetConsoleOutputCP(65001); 

    int num;
    int soma = 0;
    int contador = 0;
    int min, max;
    int primeiro = 1;

    printf("Introduza números (termine com -1):\n");

    while (1) {
        scanf("%d", &num);

        if (num == -1) {
            if (contador == 0) {
                printf("Erro\n");
            } else {
                float media = soma / contador;
                printf("Média: %.2f\n", media);
                printf("Mínimo: %d\n", min);
                printf("Máximo: %d\n", max);
            }
            break;
        }

        soma += num;
        contador++;

		//prox if serve para guardar o primeiro numero como menor e maior e depois comparar com os proximos a serem instroduzidos
        if (primeiro) {
            min = max = num;
            primeiro = 0;
        } else {
            if (num < min) min = num;
            if (num > max) max = num;
        }
    }
}
