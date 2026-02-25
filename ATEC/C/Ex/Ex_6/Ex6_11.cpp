#include<stdio.h>
#include<windows.h>

int main() 
{
	SetConsoleOutputCP(65001); 
	
    int num = 9;

    for (int i = 1; i <= 10; i++) {
        printf("%2d x %2d = %3d\n", i, num, i * num);
    }
}
