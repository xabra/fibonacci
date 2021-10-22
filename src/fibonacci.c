#include <stdio.h>

#include "../includes/fib.h"
// Includes search path not working.  Had to make it explicit....why?

int main()
{
    int fibmax = 10;

    for (int i = 1; i < fibmax; i++)
    {
        printf("%d: %d\n", i, fib(i));
    }
}
