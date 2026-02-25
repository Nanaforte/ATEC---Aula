#include<stdio.h>

main()
{
	
	char ch ='c';
	int i =20;
	float f =1.20000;
	char *str="Isto e uma string";
	
	char *ptr_ch = &ch;
	int *ptr_i = &i;
	float *ptr_f = &f;
	char *ptr_str = str;
	
	printf("Usando apontadores:\n\n\n"
           "[%c], [%d], [%f], [%s]\n", *ptr_ch, *ptr_i, *ptr_f, ptr_str);
	
	
}


















