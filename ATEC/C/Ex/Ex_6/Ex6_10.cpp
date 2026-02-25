#include<stdio.h>
#include<windows.h>


int main() 
{
	SetConsoleOutputCP(65001); 

   for (int i = 0; i <= 10; i++) {
        printf("%2d - %2d\n", i, i + 1);
    }
}