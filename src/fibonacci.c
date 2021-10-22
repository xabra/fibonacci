#include <stdio.h>

#include "../includes/fib.h"

int main()
{
    int fibmax = 10;

    for (int i = 1; i < fibmax; i++)
    {
        printf("%d: %d\n", i, fib(i));
    }
}
