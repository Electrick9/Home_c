#include <stdio.h>

void bin(int n)
{
    if(n>=2)
    {
        bin(n/2);
    }
    printf("%d",n%2);
}
int main(void)
{
    int a;
    scanf ("%d", &a);
    bin(a);
    return 0;
}

