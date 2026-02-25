#include <stdio.h>
main()
{
    int variavel = 10;
    int *int_ptr;
    int_ptr = &variavel;

    int x;
    x = *int_ptr;

    printf("variavel = %d, x = %d\n", variavel, x);

}