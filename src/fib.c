
int fib(int i)
{
    if (i <= 2)
    {
        return 1;
    }

    return fib(i - 2) + fib(i - 1);
}