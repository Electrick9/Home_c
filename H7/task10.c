#include <stdio.h>


int is_prime(int n, int del) 
{

    if (n < 2)
    {
        return 0;
    }

    if ((del * del) > n)
    {
        return 1;
    }

    if ((n % del) == 0)
    {
        return 0;
    }

    return is_prime(n, (del + 1));
}

int main()
{
    int a;

    scanf("%d", &a);


    if (is_prime(a, 2))
    {
        printf("YES\n");
    }

    else
    {
        printf("NO\n");
    }

    return 0;
}
