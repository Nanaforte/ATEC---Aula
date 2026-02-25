#include <stdio.h>

main()
{
    int a = 7;
    int *ptr_a;

    ptr_a = &a; //aPtr recebe o endereço de a

    printf("O valor da variavel 'a' e %d \n", a);
    printf("O valor do ponteiro *aPtr e %d \n\n", *ptr_a);
    
    printf("O endereco de 'a' e %p\n", &a);
    printf("O endereco de aPtr e %p\n", ptr_a);
}