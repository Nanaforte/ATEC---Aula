/* ** Menu Principal ** 

1 - Opção 1 
2 - Opção 2 
3 - Opção 3 
0 - Sair 

R: ------------------------ 

Depois de inserir a opção pretendida, o programa deve dizer "Escolheu a opção 'x' ", 
e depois por baixo deve perguntar se deseja escolher uma nova opção: "Quer escolher uma nova opção? [S]im , [N]ão" 

A escolha deve estar preparada para maiúsculas e minúsculas. 
Se escolher "0 - Sair", o programa deve agradecer por ter usado "x" vezes o programa. */


#include <stdio.h>      
#include <windows.h> 
#include <locale.h>   
#include<conio.h>

//#include <ctype.h>      // Para a função toupper (converter letra para maiúscula)

int main()
{
    SetConsoleOutputCP(65001);   

    int op;          
    int contador = 0;// conta quantas vezes o menu foi utilizado
    char resp;      


        // --- Mostra o menu principal ---

    do {
        puts("\n** Menu Principal **");
        puts("\n 1 - Opção 1 \n 2 - Opção 2 \n 3 - Opção 3 \n 0 - Sair");
        printf("R: ");  
        scanf("%d", &op); 
        
        // Mostra a opção escolhida 
        printf("\nEscolheu a opção %d\n", op);
        contador++; 

        // Se for 0, sai do ciclo
        if (op == 0) break;

        // Pergunta se quer escolher uma nova opção
        
        printf("Quer escolher uma nova opção? [S]im , [N]ão: ");
        scanf(" %c", &resp);      
        resp = toupper(resp);     

        //o ciclo repete se a resposta for S
    } while (resp == 'S');

    // --- Mensagem final ---
    printf("\nObrigado por ter usado o programa %d vez(es).\n", contador);

}
