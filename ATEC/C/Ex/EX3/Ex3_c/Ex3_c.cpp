//Ex3_c
//

#include <cstdio>
#include <cmath>    // Para M_PI e pow
 
int main() {
    float raio;
    printf("Insira valor do raio: ");
    scanf("%f", &raio);
 
    printf("Perimetro = %.2f\n", 2 * M_PI * raio);
    printf("Area = %.2f\n", M_PI * pow(raio, 2));
    return 0;
}