#include <stdio.h>

void rec(int n)
{
    printf("%5d",n);
    if (n>1 )
        rec(n-1);
}
int main(void)
{
    int a;
    scanf ("%d", &a);
    rec(a);
    return 0;
}
