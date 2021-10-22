#include <stdio.h>

int fib(int i);

int main()
{
    int fibmax = 40;

    for (int i = 1; i < fibmax; i++)
    {
        printf("%d: %d\n", i, fib(i));
    }
}

int fib(int i)
{
    if (i <= 2)
    {
        return 1;
    }

    return fib(i - 2) + fib(i - 1);
}