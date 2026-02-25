//Ex3_c
//CRIE UM PROGRAMA QUE CALCULE O PERÍMETRO (PERÍMETRO = 2 × Π × R) E A ÁREA (ÁREA = Π × R²) DE UMA CIRCUNFERÊNCIA.

#include <cstdio>
#include <cmath>    //BIBLIOTECA "M_PI" E PARA "POW" Para M_PI e pow
 
int main() {
    float raio;
    
    printf("Insira valor do raio: ");
    scanf("%f", &raio);
 
    printf("Perimetro = %.2f\n", 2 * M_PI * raio);       // "M_PI" PARA FAZER O PI
    printf("Area = %.2f\n", M_PI * pow(raio, 2));        // "POW" PARA FAZER POTÊNCIAS
    
    return 0;
}