#include <stdio.h>

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main()
{
    int fib_number = 12;
    printf("fib(4)Ϊ%d",fib(fib_number));
}

