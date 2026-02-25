#include<stdio.h>
#include<windows.h>

main()
{
    SetConsoleOutputCP(65001); 
	
	  printf("Celsius  Fahrenheit\n");
	  
	  for(float c=0; c<=40; c=c+2)
	  {
	  	printf("%6.2f %10.2f\n", c, (9.0/5.0)*c+32);
	  }
	

}



