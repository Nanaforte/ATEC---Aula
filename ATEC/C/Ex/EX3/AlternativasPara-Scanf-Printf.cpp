#include<stdio.h>
#include<windows.h>
#include<conio.h>   //para utilizarmos o getch

main()
{
	/*Alternativas ao printf e ao scanf
	
	scanf:
	      getchar - aceita 1 caracter (letra ou numero)
		  getche  - aceita 1 caracter e não precisa de enter para validar   
		  getch   - igual a getche, mas não se vê o caracter digitado(Precisamos de uma biblioteca - #include<conio.h>)
		  gets    - permite inserir nomes, ou frase e não apenas 1 caracter
		  
	printf:
		  putchar - mostra 1 caracter no ecran
		  puts    - mostra uma frase no ecra. Quebra a linha automaticamente
	*/
	
	
	char caracter;
	printf("Digite um caracter: ");
	// Se utilizarmos scanf ---> scanf("%c")
	caracter=getche();      //getche com o e a letra não vai aparecer
	//caracter=getch();       //getche sem o e a letra não vai aparecer
	
	printf("\nA letra inserida = %c",caracter);
	
	putchar('\n');
	putchar('P');
	putchar('\n');
	puts("O meu nome = Pedro");     //O "puts" faz automáticamente o \n
	putchar('P');
	
}




