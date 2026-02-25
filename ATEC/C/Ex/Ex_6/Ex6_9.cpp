#include<stdio.h>
#include<windows.h>

int main() 
{
	
	SetConsoleOutputCP(65001); 

    for (char letra = 'a'; letra <= 'z'; letra++) {
        printf("O valor ASCII de %c é %d\n", letra, letra);
    }
}

