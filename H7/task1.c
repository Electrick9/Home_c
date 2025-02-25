#include <stdio.h>


void rec(int n)
{
    if (n>1 )
        rec(n-1);
    printf("%5d",n);
}

int main(void)
{
    int a;

    scanf ("%d", &a);
    rec(a);

    return 0;
}
