#include <stdio.h>

main()
{
    char letra = 'b';          
    char *ptr = &letra;      

    printf("(1) %c\n", letra);
    printf("(2) %p\n", ptr);

    *ptr = 'd';

    printf("(3) %c\n", letra);
}