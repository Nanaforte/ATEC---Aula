#include<stdio.h>
#include<windows.h>
#include<math.h>

main()
{
    SetConsoleOutputCP(65001); 
	
    
    // FOR com declaração de variável interna
    for (float raio = 1; raio != 0;) {
        printf("\nIntroduza o raio (0 para sair): ");
        scanf("%f", &raio);
        
        if (raio == 0) {
            printf("Fim do programa\n");
            break;
        }
        
        if (raio < 0) {
            printf("Raio inválido\n");
            continue;
        }
        
        // Calcula e mostra a área
        float area = M_PI * raio * raio;
        printf("A área é: %.6f\n", area);
    }
}