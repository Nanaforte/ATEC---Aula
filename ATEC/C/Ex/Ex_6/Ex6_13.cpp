#include<stdio.h>
#include<windows.h>

int main() 
{
	SetConsoleOutputCP(65001); 

    // Usando apenas 4 asteriscos no código
    char s1 = '*';  // 1º asterisco
    char s2 = '*';  // 2º asterisco  
    char s3 = '*';  // 3º asterisco
    char s4 = '*';  // 4º asterisco
    
    // Padrão: alterna entre diferentes combinações
    printf("%c %c\n", s1, s2);
    printf("%c %c\n", s3, s4);
    printf("%c %c\n", s1, s2);
    printf("%c %c\n", s3, s4);
    printf("%c %c\n", s1, s2);
    printf("%c %c\n", s3, s4);
    printf("%c %c\n", s3, s4);
    printf("%c %c\n", s3, s4);
    printf("%c %c\n", s3, s4);
    printf("%c %c\n", s3, s4);
    
    return 0;
}