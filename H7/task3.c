#include <stdio.h>


void rec(int n)
{
    if(n == 0)
    {
        return ;
    }

    printf("%d ", n % 10);
    rec(n / 10);
}

int main(void)
{
    int a;
    
    scanf ("%d", &a);

    if (a == 0)
    {
        printf("0\n");
    }

    else
    {
        rec(a);
    }
    
    return 0;
}

