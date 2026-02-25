#include<stdio.h>
#include<windows.h>

int main() 
{
	SetConsoleOutputCP(65001); 
	    
    for (int x = 10; x >= 1; x--) {
        printf("x = %d\n", x);
    } 
}