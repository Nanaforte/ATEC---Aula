#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main() {
	
	SetConsoleOutputCP(65001);

    char caracter;
    int i;
    
        // Loop que se repete 3 vezes conforme solicitado
    for (i = 0; i < 3; i++) {
        printf("Insira um caracter: ");
        scanf(" %c", &caracter);
        
        if (isalpha(caracter)) {
            printf("O caracter inserido é um caracter alfabético.\n");
        }
        else if (isdigit(caracter)) {
            printf("O caracter inserido é um número (dígito).\n");
        }
        else {
            printf("O caracter inserido é especial.\n");
        }
    }
    
    return 0;
}
