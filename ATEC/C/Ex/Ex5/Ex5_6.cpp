#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "Portuguese");
    
    int d1, d2, resultado;
    char operador;

    printf("Insira uma expressão (ex: 2+2): ");
    scanf("%d %c %d", &d1, &operador, &d2);

    if (operador == '+') {
        resultado = d1 + d2;
        printf("%d\n", resultado);
        
    } else if (operador == '-') {
        resultado = d1 - d2;
        printf("%d\n", resultado);
        
    } else if (operador == '*') {
        resultado = d1 * d2;
        printf("%d\n", resultado);
        
    } else if (operador == '/') {
        if (d2 == 0) {
            printf("Não é possível dividir por zero.\n");
        } else {
            resultado = d1 / d2;
            printf("%d\n", resultado);
        }
    } else {
        printf("Operador inválido.\n");
    }
}