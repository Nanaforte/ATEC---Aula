#include<stdio.h>
#include<windows.h>

int main() 
{
	
   SetConsoleOutputCP(65001); 

    printf("Tabuada do 5\n");
    
    int i = 1;  //contador
    
    while (i <= 10) {
        printf("5 * %2d = %2d\n", i, 5 * i);
        i++; 
    }
}